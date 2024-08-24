#include "IGS_ProgressGadgetBase.h"

AIGS_ProgressGadgetBase::AIGS_ProgressGadgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanByDisrubtedByAI = false;
}

void AIGS_ProgressGadgetBase::SetCanBeDisruptedByAI(bool InValue) {
}


bool AIGS_ProgressGadgetBase::IsDisrupted_Implementation() {
    return false;
}


