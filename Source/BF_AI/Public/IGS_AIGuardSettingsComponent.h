#pragma once
#include "CoreMinimal.h"
#include "IGS_AISettingsComponent.h"
#include "IGS_CombatRangeSettingsInterface.h"
#include "IGS_CoverSettingsInterface.h"
#include "IGS_MeleeWeaponSettingsInterface.h"
#include "IGS_ReactionsSettingsInterface.h"
#include "IGS_SecondaryWeaponSettingsInterface.h"
#include "IGS_WeaponSettingsInterface.h"
#include "IGS_AIGuardSettingsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIGuardSettingsComponent : public UIGS_AISettingsComponent, public IIGS_SecondaryWeaponSettingsInterface, public IIGS_MeleeWeaponSettingsInterface, public IIGS_WeaponSettingsInterface, public IIGS_CombatRangeSettingsInterface, public IIGS_CoverSettingsInterface, public IIGS_ReactionsSettingsInterface {
    GENERATED_BODY()
public:
    UIGS_AIGuardSettingsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

