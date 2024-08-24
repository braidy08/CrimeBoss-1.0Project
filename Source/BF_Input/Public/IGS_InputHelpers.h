#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EIGS_InputAction.h"
#include "IGS_InputActionEntry.h"
#include "IGS_InputHelpers.generated.h"

class UObject;

UCLASS(Blueprintable)
class BF_INPUT_API UIGS_InputHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_InputHelpers();

    UFUNCTION(BlueprintCallable)
    static void GetInputActionString(UObject* inWCO, EIGS_InputAction InAction, FName& OutText);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_InputActionEntry GetInputActionEntry(UObject* inWCO, EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetFKeyByActionName(FName inActionName, bool bGamepadKey, bool inAlternativeKey);
    
};

