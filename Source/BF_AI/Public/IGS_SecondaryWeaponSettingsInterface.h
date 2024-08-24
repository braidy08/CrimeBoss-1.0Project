#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "IGS_SecondaryWeaponSettingsInterface.generated.h"

class UIGS_ModInventoryObject;
class UIGS_SkinData;
class UIGS_WeaponInventoryObject;
class UMETA_WeaponInventoryObject;

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_SecondaryWeaponSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_SecondaryWeaponSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UIGS_SkinData> GetSecondaryWeaponSkin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSecondaryWeaponReloadTimeOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSubclassOf<UIGS_ModInventoryObject>> GetSecondaryWeaponMods();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UIGS_WeaponInventoryObject> GetSecondaryWeaponInvetoryObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UMETA_WeaponInventoryObject> GetSecondaryWeaponDefinition();
    
};

