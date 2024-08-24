#include "IGS_InputHelpers.h"

UIGS_InputHelpers::UIGS_InputHelpers() {
}

void UIGS_InputHelpers::GetInputActionString(UObject* inWCO, EIGS_InputAction InAction, FName& OutText) {
}

FIGS_InputActionEntry UIGS_InputHelpers::GetInputActionEntry(UObject* inWCO, EIGS_InputAction InAction) {
    return FIGS_InputActionEntry{};
}

FKey UIGS_InputHelpers::GetFKeyByActionName(FName inActionName, bool bGamepadKey, bool inAlternativeKey) {
    return FKey{};
}


