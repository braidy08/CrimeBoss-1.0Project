#include "IGS_NavLinkHandlerComponent.h"

UIGS_NavLinkHandlerComponent::UIGS_NavLinkHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentTransition = NULL;
    this->m_NavlinkTransition = NULL;
    this->m_NavlinkZiplineTransition = NULL;
    this->m_NavlinkLadderTransition = NULL;
    this->m_NavlinkRappelTransition = NULL;
    this->m_NavlinkDoorTransition = NULL;
    this->m_NavlinkJumpTransition = NULL;
    this->m_NavlinkWalkThroughTransition = NULL;
    this->UseSlideForLadder = false;
    this->CanUseDoors = true;
}


