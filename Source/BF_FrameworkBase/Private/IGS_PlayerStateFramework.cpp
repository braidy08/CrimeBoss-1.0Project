#include "IGS_PlayerStateFramework.h"

AIGS_PlayerStateFramework::AIGS_PlayerStateFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_PlayerStateFramework::SetIsReady() {
}

bool AIGS_PlayerStateFramework::IsReady() const {
    return false;
}

bool AIGS_PlayerStateFramework::IsInitialized() const {
    return false;
}


