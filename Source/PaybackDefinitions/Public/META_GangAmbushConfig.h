#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "META_Chance.h"
#include "META_GangAmbushConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangAmbushConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_Chance> DefaultForGangAmbush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossInTopEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GangLostTerritoryInLastDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GangAttackedBossInLastDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionTypeIsIntel;
    
    FMETA_GangAmbushConfig();
};

