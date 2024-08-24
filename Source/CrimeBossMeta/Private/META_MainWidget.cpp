#include "META_MainWidget.h"

UMETA_MainWidget::UMETA_MainWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->UIEventsManagerComponent = NULL;
    this->LevelActorsManagerComponent = NULL;
    this->MetaGameMode = NULL;
    this->MetaGameState = NULL;
}








void UMETA_MainWidget::OnGamemodeReady_Implementation() {
}


