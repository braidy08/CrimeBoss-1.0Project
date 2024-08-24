#pragma once
#include "CoreMinimal.h"
#include "META_ComparableItemData.h"
#include "META_BaseObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UMETA_BaseObject : public UMETA_ComparableItemData {
    GENERATED_BODY()
public:
    UMETA_BaseObject();

};

