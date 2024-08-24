#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "META_WeaponSaveData.h"
#include "META_GenericCharacterSave.h"
#include "META_UniqueCharacterSave.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_BlackmarketManagerSaveData.generated.h"

class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_BlackmarketManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GenericCharacterSave> GenericRecruitsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_UniqueCharacterSave> UniqueRecruitsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> WeaponsBlackmarket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastUsedID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime NextRefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FDateTime> RecentWeaponRefreshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FDateTime> RecentCrewRefreshes;
    
    FIGS_Quick_BlackmarketManagerSaveData();
};

