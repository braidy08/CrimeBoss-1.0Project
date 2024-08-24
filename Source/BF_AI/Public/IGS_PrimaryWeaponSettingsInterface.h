#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "IGS_PrimaryWeaponSettingsInterface.generated.h"

class UIGS_ModInventoryObject;
class UIGS_SkinData;
class UIGS_WeaponInventoryObject;
class UMETA_WeaponInventoryObject;

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_PrimaryWeaponSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_PrimaryWeaponSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UIGS_SkinData> GetPrimaryWeaponSkin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPrimaryWeaponReloadTimeOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSubclassOf<UIGS_ModInventoryObject>> GetPrimaryWeaponMods();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UIGS_WeaponInventoryObject> GetPrimaryWeaponInvetoryObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UMETA_WeaponInventoryObject> GetPrimaryWeaponDefinition();
    
};

