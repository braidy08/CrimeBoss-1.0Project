#pragma once
#include "CoreMinimal.h"
#include "META_DialogueUIData.h"
#include "META_CutsceneUIData.h"
#include "META_MovieUIData.h"
#include "META_TextScreenUIData.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "META_MediaManager.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_MediaManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_MediaManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TextScreenShoudBeShown(FMETA_TextScreenUIData TextScreenData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MovieShouldBePlayed(FMETA_MovieUIData MovieData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMediaForScreen(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMediaForPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DialogueTypeShouldBePlayed(FGameplayTag inTypeTag, FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DialogueShouldBePlayed(FMETA_DialogueUIData DialogueData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CutsceneShouldBePlayed(FMETA_CutsceneUIData CutsceneData);
    
};

