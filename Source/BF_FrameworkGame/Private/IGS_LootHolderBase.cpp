#include "IGS_LootHolderBase.h"

AIGS_LootHolderBase::AIGS_LootHolderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LootCollection = NULL;
    this->AttachableComponent = NULL;
    this->BreakToOpen = false;
}

void AIGS_LootHolderBase::Open(AActor* inInstigator) {
}

void AIGS_LootHolderBase::OnComponentBroken(AActor* inDmgCauser, const bool inOpen) {
}

bool AIGS_LootHolderBase::IsOpened() const {
    return false;
}

bool AIGS_LootHolderBase::IsBroken() const {
    return false;
}


