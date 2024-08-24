#include "META_PlotlineAsset.h"

UMETA_PlotlineAsset::UMETA_PlotlineAsset() {
    this->m_Price = 0;
    this->m_AdditionalPricePercent = 0.00f;
}

void UMETA_PlotlineAsset::SetInfo(UObject* inWCO, const FGameplayTag& inPlotlineAssetId) {
}

void UMETA_PlotlineAsset::SetAdditionalPricePercent(float inAdditionalPricePercent) {
}

int32 UMETA_PlotlineAsset::GetUnlockBossLevel() {
    return 0;
}

int32 UMETA_PlotlineAsset::GetScore() {
    return 0;
}

int32 UMETA_PlotlineAsset::GetPrice() {
    return 0;
}

FGameplayTag UMETA_PlotlineAsset::GetPreviousVersion() {
    return FGameplayTag{};
}

FText UMETA_PlotlineAsset::GetName() {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UMETA_PlotlineAsset::GetImage() {
    return NULL;
}

FGameplayTag UMETA_PlotlineAsset::GetId() {
    return FGameplayTag{};
}

FText UMETA_PlotlineAsset::GetDescription() {
    return FText::GetEmpty();
}

bool UMETA_PlotlineAsset::GetCanBeLost(bool& outSuccess) {
    return false;
}

float UMETA_PlotlineAsset::GetBossPointsMultiplier() {
    return 0.0f;
}

EMETA_PlotlineAssetAvailability UMETA_PlotlineAsset::GetAvailability() {
    return EMETA_PlotlineAssetAvailability::INVALID;
}


