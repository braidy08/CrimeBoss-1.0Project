#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_Ziptie.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class UIGS_ZiptieComponent;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_Ziptie : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CivToZiptieKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* CivToZiptie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ZiptieComponent* ZiptieComponent;
    
public:
    UBTTask_Ziptie();

};

