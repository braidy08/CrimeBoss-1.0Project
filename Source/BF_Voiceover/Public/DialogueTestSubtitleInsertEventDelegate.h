#pragma once
#include "CoreMinimal.h"
#include "DialogueTestSubtitleInsertEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueTestSubtitleInsertEvent, const FString&, SubtitleText);

