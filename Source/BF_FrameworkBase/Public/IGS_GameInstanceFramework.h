#pragma once
#include "CoreMinimal.h"
#include "AdvancedFriendsGameInstance.h"
#include "ECommonMissionResult.h"
#include "EIGS_SessionJoinFailureReason.h"
#include "PaybackFPS2MetaDataRequestedDynamicSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameInstanceFramework.generated.h"

class UIGS_BaseMissionObject;
class UObject;

UCLASS(Blueprintable, NonTransient)
class BF_FRAMEWORKBASE_API UIGS_GameInstanceFramework : public UAdvancedFriendsGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPaybackFPS2MetaDataRequestedDynamicSignature OnFPS2MetaDataRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComesFromMission;
    
    UIGS_GameInstanceFramework();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMissionInternal(const UObject* inWCO, TSubclassOf<UIGS_BaseMissionObject> inMissionID);
    
public:
    UFUNCTION(BlueprintCallable)
    static void StartMission(const UObject* inWCO, TSubclassOf<UIGS_BaseMissionObject> inMissionID);
    
    UFUNCTION(BlueprintCallable)
    void ServerTravel(const UObject* inWCO, const FString& inLevelName, bool inAbsolute);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QuitToMeta(const UObject* inWCO, ECommonMissionResult inMissionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QuitToLobby(const UObject* inWCO, ECommonMissionResult inMissionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void JoinSessionFailed(EIGS_SessionJoinFailureReason Reason);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsMissionEndIgnored(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void IgnoreMissionEnd(const UObject* inWCO, bool inIgnoreMissionEnd);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishMissionInternal(const UObject* inWCO, ECommonMissionResult inMissionResult);
    
public:
    UFUNCTION(BlueprintCallable)
    static void FinishMission(const UObject* inWCO, ECommonMissionResult inMissionResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateLoadingFaderInternal();
    
public:
    UFUNCTION(BlueprintCallable)
    static void CreateLoadingFader(const UObject* inWCO);
    
};

