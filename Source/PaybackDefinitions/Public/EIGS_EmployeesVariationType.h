#pragma once
#include "CoreMinimal.h"
#include "EIGS_EmployeesVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_EmployeesVariationType : uint8 {
    US_None,
    US_Office,
    US_Bank,
    US_Women,
    US_Workers,
    US_Satellite,
    US_Jewelery,
    US_Grocery,
    US_FPSMaxIndex = 128,
    US_Unknown = 255,
};

