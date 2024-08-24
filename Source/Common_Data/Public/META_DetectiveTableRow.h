#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "META_DetectiveTableRow.generated.h"

class UMETA_DetectiveID;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_DetectiveTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_DetectiveID> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FMETA_DetectiveTableRow();
};

