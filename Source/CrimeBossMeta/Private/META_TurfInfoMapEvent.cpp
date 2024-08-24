#include "META_TurfInfoMapEvent.h"

UMETA_TurfInfoMapEvent::UMETA_TurfInfoMapEvent() {
}

void UMETA_TurfInfoMapEvent::Init(FGameplayTag inTileTag, EMETA_Gang inNewGang) {
}

FGameplayTag UMETA_TurfInfoMapEvent::GetTileTag() {
    return FGameplayTag{};
}

EMETA_Gang UMETA_TurfInfoMapEvent::GetNewGang() {
    return EMETA_Gang::None;
}


