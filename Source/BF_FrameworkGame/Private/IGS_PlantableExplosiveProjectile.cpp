#include "IGS_PlantableExplosiveProjectile.h"

AIGS_PlantableExplosiveProjectile::AIGS_PlantableExplosiveProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PushIntoMeshDistance = 3.00f;
    this->m_IsPlanted = false;
}


void AIGS_PlantableExplosiveProjectile::Detonate() {
}

bool AIGS_PlantableExplosiveProjectile::CanStick_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult) {
    return false;
}


