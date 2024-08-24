#include "IGS_MenuNavigationManager.h"

UIGS_MenuNavigationManager::UIGS_MenuNavigationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_MenuNavigationManager::OnInputDeviceChanged(EIGS_InputDevice inDevice) {
}

TArray<EIGS_InputAction> UIGS_MenuNavigationManager::KeyEventToInputActions(const FKeyEvent& InKeyEvent) const {
    return TArray<EIGS_InputAction>();
}

bool UIGS_MenuNavigationManager::IsWidgetInputBlocked_Implementation() {
    return false;
}


