#include "IGS_WidgetOptionsMenu.h"

UIGS_WidgetOptionsMenu::UIGS_WidgetOptionsMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->GameSetButton = NULL;
    this->GraphicsSetButton = NULL;
    this->SoundSetButton = NULL;
    this->ControlsSetButton = NULL;
    this->ApplyButton = NULL;
    this->RevertButton = NULL;
    this->CloseButton = NULL;
    this->SettingsWidgetSwitcher = NULL;
    this->GraphicsSetButtonText = FText::FromString(TEXT("Graphics Settings"));
    this->SoundSetButtonText = FText::FromString(TEXT("Sound Settings"));
    this->ControlsSetButtonText = FText::FromString(TEXT("Controls Settings"));
    this->CloseButtonText = FText::FromString(TEXT("Close"));
    this->ApplyButtonText = FText::FromString(TEXT("Apply"));
}

void UIGS_WidgetOptionsMenu::UpdateMenu() const {
}

void UIGS_WidgetOptionsMenu::ShiftCurrentMenuSelected(int32 Direction) {
}

void UIGS_WidgetOptionsMenu::SetupInMainMenu(APlayerController* inOwningPlayer) {
}

void UIGS_WidgetOptionsMenu::SetupInGame(AIGS_PlayerControllerRoot* inOwningPlayer, UIGS_GUIController* inGUIController, bool inWasSystemMenuOpen) {
}

void UIGS_WidgetOptionsMenu::SetSettingsButtonsState(bool inState) const {
}


void UIGS_WidgetOptionsMenu::OnRevertButtonClicked() const {
}

void UIGS_WidgetOptionsMenu::OnApplyButtonClicked() const {
}



