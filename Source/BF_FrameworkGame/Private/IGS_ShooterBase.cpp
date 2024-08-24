#include "IGS_ShooterBase.h"

UIGS_ShooterBase::UIGS_ShooterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShootFromCamera = true;
    this->bIsSuppressed = false;
    this->ShooterType = EIGS_WeaponAttackType::AT_SemiAuto;
    this->m_ProjectileClass = NULL;
    this->bForceFeedbackLooped = false;
    this->ForceFeedbackName = TEXT("Shooting");
}

void UIGS_ShooterBase::OnShooterStopAttack_Implementation() {
}

void UIGS_ShooterBase::OnShooterBeginAttack_Implementation() {
}

void UIGS_ShooterBase::OnProjectileActivated_Implementation(AIGS_ProjectileBase* inProjectile) {
}

void UIGS_ShooterBase::OnProjectileAcquired_Implementation(AIGS_ProjectileBase* inProjectile) {
}


