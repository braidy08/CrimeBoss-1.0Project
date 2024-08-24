#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMETA_MetaLogVerbosity.h"
#include "META_LogEditorSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_LogEditorSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_LogEditorSubsystem();

    UFUNCTION(BlueprintCallable)
    static void PrintMetaLog(const UObject* inWCO, const FString& inCategory, const FString& inMessage, EMETA_MetaLogVerbosity inVerbosity);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTimeString();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDateString();
    
    UFUNCTION(BlueprintCallable)
    void CreateMetaLogFile(bool inNewCompaing, bool inIsDebug, const FString& inSaveFileName);
    
};

