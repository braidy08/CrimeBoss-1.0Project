#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_WieldableReplicatedData.generated.h"

class UIGS_SkinData;

USTRUCT(BlueprintType)
struct FIGS_WieldableReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UniqueId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 TableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WieldableSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_SkinData> WeaponSkin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> Mods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_InventoryObjectUniversalData UniversalData;
    
    BF_NETWORK_API FIGS_WieldableReplicatedData();
};

