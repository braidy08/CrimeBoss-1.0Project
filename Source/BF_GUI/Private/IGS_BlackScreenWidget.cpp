#include "IGS_BlackScreenWidget.h"

UIGS_BlackScreenWidget::UIGS_BlackScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ShowBlackScreen = true;
}

void UIGS_BlackScreenWidget::ToggleGlobalInvalidation(bool inEnabled) {
}


