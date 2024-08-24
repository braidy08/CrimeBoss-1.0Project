#include "IGS_EquipmentData.h"

FIGS_EquipmentData::FIGS_EquipmentData() {
    this->bAllowedForGeneration = false;
    this->ResourceType = EIGS_EquipmentResourceType::ERT_Charges;
    this->Charges = 0;
    this->Cooldown = 0.00f;
}

