#pragma once
#include "CoreMinimal.h"
#include "IGS_SkinTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_WieldableSkinTableRow.generated.h"

class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WieldableSkinTableRow : public FIGS_SkinTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InventoryObjectFramework> CompatibleWieldable;
    
    FIGS_WieldableSkinTableRow();
};

