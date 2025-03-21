#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "BF_FocusSignatureDelegate.h"
#include "PaybackGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAYBACKDEFINITIONS_API UPaybackGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBF_FocusSignature OnLostFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBF_FocusSignature OnFocusReceived;
    
    UPaybackGameViewportClient();

};

