#include "META_GraphsData.h"

UMETA_GraphsData::UMETA_GraphsData() {
}

TMap<TSoftObjectPtr<UMETA_BaseStoryGraph>, EMETA_GraphStatus> UMETA_GraphsData::GetStartedGraphs() {
    return TMap<TSoftObjectPtr<UMETA_BaseStoryGraph>, EMETA_GraphStatus>();
}

TSoftObjectPtr<UMETA_BaseStoryGraph> UMETA_GraphsData::GetSpecialCrewEventsGraph() {
    return NULL;
}

FMETA_Interval UMETA_GraphsData::GetSecondPlotlineDays() {
    return FMETA_Interval{};
}

TMap<TSoftObjectPtr<UMETA_BaseStoryGraph>, FMETA_PlotlineGraphStartTime> UMETA_GraphsData::GetPlotlineGraphs() {
    return TMap<TSoftObjectPtr<UMETA_BaseStoryGraph>, FMETA_PlotlineGraphStartTime>();
}

FMETA_Interval UMETA_GraphsData::GetFirstPlotlineDays() {
    return FMETA_Interval{};
}

TSoftObjectPtr<UMETA_BaseStoryGraph> UMETA_GraphsData::GetCrewRandEventsGraph() {
    return NULL;
}

void UMETA_GraphsData::GetCharacterGraphInfo(EIGS_CharacterID inCharacterID, bool& outFind, FMETA_UniqueCharacterGraphInfo& outGraphInfo) {
}

FMETA_Interval UMETA_GraphsData::GetAnyNextPlotlineDays() {
    return FMETA_Interval{};
}


