#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EIGS_CharacterID.h"
#include "IGS_CharacterIDInterface.h"
#include "IGS_HeisterNumberInterface.h"
#include "IGS_HeisterDataInterface.h"
#include "IGS_PlayerControllerFramework.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_PlayerControllerFramework : public APlayerController, public IIGS_CharacterIDInterface, public IIGS_HeisterNumberInterface, public IIGS_HeisterDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* CurrentPawn;
    
    AIGS_PlayerControllerFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetShowCrosshair(bool inShowCrosshair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreClientTravel();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetIsMaxLeveled(bool inIsMaxLeveled) override PURE_VIRTUAL(SetIsMaxLeveled,);
    
    UFUNCTION(BlueprintCallable)
    void SetGenericVariant(int32 inGenericVariant) override PURE_VIRTUAL(SetGenericVariant,);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(EIGS_CharacterID inCharacterID) override PURE_VIRTUAL(SetCharacterID,);
    
    UFUNCTION(BlueprintCallable)
    bool IsMaxLeveled() const override PURE_VIRTUAL(IsMaxLeveled, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGenericVariant() const override PURE_VIRTUAL(GetGenericVariant, return 0;);
    
    UFUNCTION(BlueprintCallable)
    EIGS_CharacterID GetCharacterID() const override PURE_VIRTUAL(GetCharacterID, return EIGS_CharacterID::Char_Unknown;);
    
    UFUNCTION(BlueprintCallable)
    void SetHeisterNumber(int32 inHeisterNumber) override PURE_VIRTUAL(SetHeisterNumber,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeisterNumber() const override PURE_VIRTUAL(GetHeisterNumber, return 0;);
    
};

