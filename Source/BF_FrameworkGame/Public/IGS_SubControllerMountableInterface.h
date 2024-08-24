#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_SubControllerMountableInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SubControllerMountableInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_SubControllerMountableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUse(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlot4(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlot3(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlot2(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlot1(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotateByMouse(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotateByKey(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotate(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveUpByMouse(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveUp(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveForward(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownBtn(bool inIsHolding);
    
};

