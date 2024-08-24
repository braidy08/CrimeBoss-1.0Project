#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_TrespassersInfo.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_TrespassersInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Tresspassers;
    
    UIGS_TrespassersInfo();

};

