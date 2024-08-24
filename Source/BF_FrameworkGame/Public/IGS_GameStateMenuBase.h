#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "IGS_GameStateMenuBase.generated.h"

class UMETA_CommonData;
class UMETA_EconomyData;
class UMETA_QuickPlayData;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GameStateMenuBase : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_EconomyData* EconomyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_CommonData* CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_QuickPlayData* QuickPlayData;
    
    AIGS_GameStateMenuBase(const FObjectInitializer& ObjectInitializer);

};

