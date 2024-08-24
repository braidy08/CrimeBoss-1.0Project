#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponDefinitionTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponDefinitionsDatabase.generated.h"

class UMETA_WeaponInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_WeaponDefinitionsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_WeaponDefinitionsDatabase();

    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetWiedableClassById(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_WeaponDefinitionTableRow GetDataWeapon(const UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_WeaponDefinitionTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_WeaponDefinitionTableRow> GetDatabaseTableBP();
    
};

