#pragma once
#include "CoreMinimal.h"
#include "IGS_SkinDatabase.h"
#include "IGS_WieldableSkinDatabase.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_WieldableSkinDatabase : public UIGS_SkinDatabase {
    GENERATED_BODY()
public:
    UIGS_WieldableSkinDatabase();

};

