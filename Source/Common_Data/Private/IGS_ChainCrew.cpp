#include "IGS_ChainCrew.h"

FIGS_ChainCrew::FIGS_ChainCrew() {
    this->ID = NULL;
    this->UniqueAmount = 0;
    this->GenericAmount = 0;
    this->GenericTier = EMETA_CharacterTier::None;
    this->BackupGenericTier = EMETA_CharacterTier::None;
}

