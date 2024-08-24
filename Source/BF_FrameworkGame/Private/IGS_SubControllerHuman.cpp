#include "IGS_SubControllerHuman.h"

UIGS_SubControllerHuman::UIGS_SubControllerHuman(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControllerSettings = NULL;
}

void UIGS_SubControllerHuman::OnUse_SERVER_Implementation(bool inIsHolding) {
}

void UIGS_SubControllerHuman::OnMoveModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode) {
}


