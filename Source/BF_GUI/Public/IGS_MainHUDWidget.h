#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_MainHUDWidget.generated.h"

class AIGS_PlayerCharacter;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_MainHUDWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> WidgetInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> StealthWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> SpectatorWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> BattleWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> EndMissionWidgets;
    
    UIGS_MainHUDWidget();

    UFUNCTION(BlueprintCallable)
    void ShowStealthWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowSpectatorWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowEndMissionWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowBattleWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStrikesVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRelevancyFromAllWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostHUDInit();
    
    UFUNCTION(BlueprintCallable)
    static FString GetVersionNumber();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRevisionNumber();
    
    UFUNCTION(BlueprintCallable)
    void AddRelevancyToAllWidgets();
    
};

