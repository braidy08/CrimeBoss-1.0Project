#include "IGS_AIControllerHeavy.h"
#include "IGS_AIHeavySettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerHeavy::AIGS_AIControllerHeavy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    this->ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    this->SettingsComponent = CreateDefaultSubobject<UIGS_AIHeavySettingsComponent>(TEXT("SettingsComponent"));
}


