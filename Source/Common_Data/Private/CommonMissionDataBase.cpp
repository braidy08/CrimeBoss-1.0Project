#include "CommonMissionDataBase.h"

FCommonMissionDataBase::FCommonMissionDataBase() {
    this->PostRelease = false;
    this->MenuCategory = EIGS_MenuCategory::Unique;
    this->NumberOfHeistersAllowed = 0;
    this->bIntelSupported = false;
    this->MaxIntelLevel = 0;
}

