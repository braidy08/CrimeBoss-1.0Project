#include "META_BaseCallback.h"

UMETA_BaseCallback::UMETA_BaseCallback() {
    this->bNeedForceExecuteAfterCallbackTrigger = true;
}

TMap<FString, int32> UMETA_BaseCallback::GetResultPaths_Implementation() {
    return TMap<FString, int32>();
}

int32 UMETA_BaseCallback::GetAvailableConnections_Implementation() {
    return 0;
}


