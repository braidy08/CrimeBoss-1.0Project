#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "IGS_LocalPlayerAchievements.generated.h"

class UIGS_CommonAchievements;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_LocalPlayerAchievements : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_CommonAchievements* m_CommonAchievements;
    
public:
    UIGS_LocalPlayerAchievements();

};

