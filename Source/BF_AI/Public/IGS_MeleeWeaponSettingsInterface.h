#pragma once
#include "CoreMinimal.h"
#include "IGS_MeleeWeaponActivationSettingsInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_MeleeWeaponSettingsInterface.generated.h"

class UIGS_MeleeWeaponInventoryObject;
class UMETA_WeaponInventoryObject;

UINTERFACE()
class BF_AI_API UIGS_MeleeWeaponSettingsInterface : public UIGS_MeleeWeaponActivationSettingsInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_MeleeWeaponSettingsInterface : public IIGS_MeleeWeaponActivationSettingsInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UIGS_MeleeWeaponInventoryObject> GetMeleeWeaponInvetoryObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UMETA_WeaponInventoryObject> GetMeleeWeaponDefinition();
    
};

