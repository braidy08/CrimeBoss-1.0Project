#include "IGS_AchievementsTableRow.h"

FIGS_AchievementsTableRow::FIGS_AchievementsTableRow() {
    this->Type = EIGS_AchievementType::PerAccount;
    this->InitialValue = 0;
    this->UnlockValue = 0;
    this->ValuesDivisor = 0;
    this->Award = EIGS_AchievementAward::Bronze;
}

