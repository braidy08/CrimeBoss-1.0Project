#include "IGS_PerkData.h"

FIGS_PerkData::FIGS_PerkData() {
    this->PerkType = EIGS_PerkType::PT_MetaPerk;
    this->PerkClass = EIGS_PerkClass::PC_Generic;
    this->PerkCategory = 0;
    this->ForbiddenHeistersQuality = 0;
    this->bAllowedForGeneration = false;
    this->SiblingID = NULL;
}

