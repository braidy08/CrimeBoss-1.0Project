#include "IGS_LootBagPickup.h"
#include "Components/SkeletalMeshComponent.h"

AIGS_LootBagPickup::AIGS_LootBagPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
 //   this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RootComp"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    this->IsPickableByAI = true;
    this->bHasItemName = false;
    this->PlacedInLevelItemType = EIGS_ItemType::Item_UNKNOWN;
    this->PickingUpByCharacter = NULL;
    this->LootGrabAkEvent = NULL;
    this->InteractiveComponent = NULL;
    this->SkeletalMesh = (USkeletalMeshComponent*)RootComponent;
}


void AIGS_LootBagPickup::NotifyPickup(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_LootBagPickup::NotifyCathInAir(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_LootBagPickup::Multicast_LootBagGrabbed_Implementation() {
}

EIGS_ItemType AIGS_LootBagPickup::GetItemType() const {
    return EIGS_ItemType::Item_Weapon;
}

TArray<FIGS_LootBagSingleItem> AIGS_LootBagPickup::GetItems() {
    return TArray<FIGS_LootBagSingleItem>();
}




