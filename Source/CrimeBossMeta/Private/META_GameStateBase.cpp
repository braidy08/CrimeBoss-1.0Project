#include "META_GameStateBase.h"
#include "IGS_SubtitleManager.h"
#include "Net/UnrealNetwork.h"

AMETA_GameStateBase::AMETA_GameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MetaGameMode = NULL;
    this->SubtitleManager = CreateDefaultSubobject<UIGS_SubtitleManager>(TEXT("Subtitle Manager"));
    this->bInitialized = false;
}

void AMETA_GameStateBase::ServerInitialize_Internal_Implementation() {
}

void AMETA_GameStateBase::Server_Initialize_Implementation() {
}

void AMETA_GameStateBase::OnRep_bInitialized() {
}

UMETA_LevelActorsManagerComponent* AMETA_GameStateBase::GetLevelActorsManagerComponent_Implementation() {
    return NULL;
}

void AMETA_GameStateBase::ClientInitialize_Internal_Implementation() {
}

void AMETA_GameStateBase::Client_Initialize_Implementation() {
}

void AMETA_GameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMETA_GameStateBase, bInitialized);
}


