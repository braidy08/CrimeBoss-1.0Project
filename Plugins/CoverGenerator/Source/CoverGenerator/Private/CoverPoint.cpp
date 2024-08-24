#include "CoverPoint.h"

UCoverPoint::UCoverPoint() {
    this->bLeftCoverStanding = false;
    this->bRightCoverStanding = false;
    this->bLeftCoverCrouched = false;
    this->bRightCoverCrouched = false;
    this->bFrontCoverCrouched = false;
    this->bCrouchedCover = false;
    this->OccupiedBy = NULL;
    this->IsActive = true;
    this->IsLocked = false;
    this->CoverReached = false;
    this->CooldownEndTime = 0.00f;
    this->bIsManual = false;
}


