#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_PressureManager.generated.h"

class UIGS_PressureManagerData;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_PressureManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PressureManagerData* m_PressureManagerData;
    
public:
    UIGS_PressureManager();

};

