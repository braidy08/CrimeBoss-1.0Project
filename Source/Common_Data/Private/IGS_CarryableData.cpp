#include "IGS_CarryableData.h"

FIGS_CarryableData::FIGS_CarryableData() {
    this->BaseDamage = 0.00f;
    this->BaseZoomMagnification = 0.00f;
    this->IsFragile = false;
    this->IsExplosive = false;
    this->SmallHits = false;
    this->LootSize = EIGS_LootSize::Small;
}

