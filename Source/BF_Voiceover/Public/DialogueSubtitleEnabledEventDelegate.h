#pragma once
#include "CoreMinimal.h"
#include "DialogueSubtitleEnabledEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueSubtitleEnabledEvent, bool, inState);

