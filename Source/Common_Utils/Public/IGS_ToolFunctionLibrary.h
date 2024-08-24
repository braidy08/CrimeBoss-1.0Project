#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_ToolFunctionLibrary.generated.h"

class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_ToolFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ToolFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetRenderInDepthPass(UPrimitiveComponent* InComponent, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEOSOnlineSubsystemActive(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetRecentLevels();
    
};

