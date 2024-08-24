#include "META_QuickPlayData.h"

UMETA_QuickPlayData::UMETA_QuickPlayData() {
    this->MaxGenericHeisterCount = 3;
    this->BlackMarketRefreshTimeInMinutes = 60;
    this->BlackMarketHeisterRefreshBaseCost = 25000;
    this->BlackMarketHeisterRefreshCoefficient = 1.20f;
    this->BlackmarketHeisterRefreshCooldownTime = 30;
    this->BlackMarketWeaponRefreshBaseCost = 45000;
    this->BlackMarketWeaponRefreshCoefficient = 1.20f;
    this->BlackmarketWeaponRefreshCooldownTime = 30;
}


