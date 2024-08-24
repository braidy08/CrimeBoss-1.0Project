#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EIGS_CharacterID.h"
#include "EIGS_InventorySlot.h"
#include "Templates/SubclassOf.h"
#include "META_CrewManager.generated.h"

class UMETA_Character;
class UMETA_WeaponInventoryObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_CrewManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_CrewManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowUpkeepCost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PromoteHeister(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveWeaponToItsSlotInHeistersLoadoutFromStash(UMETA_Character* Character, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveWeaponFromHeistersSlotToStash(UMETA_Character* Character, EIGS_InventorySlot inInventorySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveHeistersLoadoutToStash(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterTaken(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HealHeisterByRest(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HealHeisterByDoctor(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLevelUpCost(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_Character* GetHeisterByID(EIGS_CharacterID ID, int32 UniqGenericId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHealingHeisterCostByRest(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHealingHeisterCostByDoctor(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_Character*> GetAllHeisters(bool inIsLobby);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireCharacter(UMETA_Character* Character);
    
};

