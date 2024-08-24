#include "IGS_LevelBlockingBounds.h"
#include "Components/PostProcessComponent.h"
#include "NavModifierComponent.h"
#include "IGS_CustomBoxComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_LevelBlockingBounds::AIGS_LevelBlockingBounds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableShapeSelection = true;
    this->BlockerSize = 20.00f;
    this->BlockerComponent = CreateDefaultSubobject<UIGS_CustomBoxComponent>(TEXT("BlockerComponent"));
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    const FProperty* p_BoxCollisionComponent_Parent = GetClass()->FindPropertyByName("BoxCollisionComponent");
    this->BlockerComponent->SetupAttachment(RootComponent);
    // this->PostProcessComponent->SetupAttachment(p_BoxCollisionComponent_Parent->ContainerPtrToValuePtr<UIGS_CustomBoxComponent>(this));
}

void AIGS_LevelBlockingBounds::SetBlockerSize(float inBlockerSize) {
}

void AIGS_LevelBlockingBounds::RefreshPostProcessSettings() {
}

void AIGS_LevelBlockingBounds::OnRep_BlockerSize() {
}

void AIGS_LevelBlockingBounds::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_LevelBlockingBounds, BlockerSize);
}


