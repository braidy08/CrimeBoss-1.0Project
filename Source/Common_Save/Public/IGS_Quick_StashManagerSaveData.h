#pragma once
#include "CoreMinimal.h"
#include "META_WeaponSaveData.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_StashManagerSaveData.generated.h"

class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_StashManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> WeaponsStash;
    
    FIGS_Quick_StashManagerSaveData();
};

