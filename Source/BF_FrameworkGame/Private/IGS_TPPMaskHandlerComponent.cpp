#include "IGS_TPPMaskHandlerComponent.h"

UIGS_TPPMaskHandlerComponent::UIGS_TPPMaskHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaskActorClass = NULL;
    this->MaskHeadAttachmentSocket = TEXT("Mask_Head_socket");
    this->MaskSkeletalMesh = NULL;
    this->m_MaskSkeletalMesh = NULL;
}


