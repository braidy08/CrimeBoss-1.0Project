#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_Entitlements.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_Entitlements : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_Entitlements();

    UFUNCTION(BlueprintCallable)
    bool UserEntitledTo(FGameplayTag inEntitlementTag);
    
    UFUNCTION(BlueprintCallable)
    void Connect();
    
};

