#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "IGS_BTService_EvaluateThrowingComponents.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_EvaluateThrowingComponents : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplateAllways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplateControl;
    
public:
    UIGS_BTService_EvaluateThrowingComponents();

};

