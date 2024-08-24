#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_SkinTableRow.generated.h"

class UIGS_SkinData;
class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_SkinTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_SkinData> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    FIGS_SkinTableRow();
};

