#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EIGS_SentryRotationType.h"
#include "IGS_SentryRotationData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIGS_SentryRotationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SentryRotationType RotationType;
    
    BF_FRAMEWORKGAME_API FIGS_SentryRotationData();
};

