#include "IGS_WorldSpaceWidgetBase.h"

UIGS_WorldSpaceWidgetBase::UIGS_WorldSpaceWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceHidden = false;
    this->bAutoActivateWidget = true;
    this->WorldWidgetOwner = NULL;
    this->WidgetType = EIGS_WorldWidgetType::Widget_Hidden;
    this->Progress = -1.00f;
    this->bIsDrill = false;
}

void UIGS_WorldSpaceWidgetBase::SetWorldSpaceWidgetVisibility(bool InVisibility) {
}

void UIGS_WorldSpaceWidgetBase::SetWidgetType(EIGS_WorldWidgetType inType) {
}

void UIGS_WorldSpaceWidgetBase::SetProgress(float InProgress) {
}

void UIGS_WorldSpaceWidgetBase::SetOwnerForBinding(AActor* inOwner) {
}

void UIGS_WorldSpaceWidgetBase::SetIsDrill(bool inbIsDrill) {
}

void UIGS_WorldSpaceWidgetBase::SetForceHidden(bool inHidden) {
}



bool UIGS_WorldSpaceWidgetBase::GetIsWidgetGroupVisible() {
    return false;
}


