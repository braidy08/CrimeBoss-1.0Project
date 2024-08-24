#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_TrafficDirectionLocks.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_TrafficDirectionLocks : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Locks;
    
    UIGS_TrafficDirectionLocks();

};

