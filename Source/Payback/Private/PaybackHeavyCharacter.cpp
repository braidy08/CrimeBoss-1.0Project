#include "PaybackHeavyCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_ObjectStatus.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

APaybackHeavyCharacter::APaybackHeavyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeakSpotObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("WeakSpot Object Status"));
    this->WeakSpotCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("WeakSpot Capsule"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->HeadPhysicalMaterial = NULL;
    this->ParticleSocketName = TEXT("pelvis");
    this->ShockChargeMeshComponent1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 1"));
    this->ShockChargeMeshComponent2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 2"));
    this->ShockChargeMeshComponent3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 3"));
    this->ShockChargeMeshComponent4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 4"));
    this->ShockChargeMesh = NULL;
    this->ShockChargeMeshComponentAttachBone = TEXT("neck_01");
    this->m_ParticleComponent = NULL;
    this->PSObject = NULL;
 //   this->ShockChargeMeshComponent1->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
 //   this->ShockChargeMeshComponent2->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
 //   this->ShockChargeMeshComponent3->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
 //   this->ShockChargeMeshComponent4->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
  //  this->WeakSpotCapsule->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
}

void APaybackHeavyCharacter::OnShockChargeBegin_Implementation() {
}

void APaybackHeavyCharacter::OnRep_RemainingMeshComps() {
}

void APaybackHeavyCharacter::OnDoomTimerEnd_Implementation() {
}

void APaybackHeavyCharacter::HandleDeath(float inCurrentHealth, float inCurrentShield, float inHealthChanged, float inShieldChanged, const FIGS_HitInfo& inHitInfo) {
}

void APaybackHeavyCharacter::EnableHeadWeakSpot_Implementation() {
}

void APaybackHeavyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APaybackHeavyCharacter, mR_ActiveMeshComps);
}


