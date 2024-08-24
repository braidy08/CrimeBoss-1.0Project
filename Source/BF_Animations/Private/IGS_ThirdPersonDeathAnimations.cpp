#include "IGS_ThirdPersonDeathAnimations.h"

UIGS_ThirdPersonDeathAnimations::UIGS_ThirdPersonDeathAnimations() {
    this->m_PlayerDeathAnimationDatabase = NULL;
    this->m_Physical_animation_component = NULL;
    this->m_SkeletalMesh = NULL;
    this->m_InCharacter = NULL;
}

void UIGS_ThirdPersonDeathAnimations::OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


