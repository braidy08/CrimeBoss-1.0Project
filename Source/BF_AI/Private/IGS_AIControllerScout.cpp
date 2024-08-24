#include "IGS_AIControllerScout.h"
#include "IGS_AIScoutSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerScout::AIGS_AIControllerScout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    this->ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    this->SettingsComponent = CreateDefaultSubobject<UIGS_AIScoutSettingsComponent>(TEXT("SettingsComponent"));
}


