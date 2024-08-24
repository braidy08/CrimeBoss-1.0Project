#include "IGS_PlayerLoadoutComponent.h"

UIGS_PlayerLoadoutComponent::UIGS_PlayerLoadoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_PlayerLoadoutComponent::Server_GivePerks_Implementation(const TArray<FMETA_PerkDataToFPS>& inPerkIDs) {
}
bool UIGS_PlayerLoadoutComponent::Server_GivePerks_Validate(const TArray<FMETA_PerkDataToFPS>& inPerkIDs) {
    return true;
}

void UIGS_PlayerLoadoutComponent::InitializeLoadout() {
}


