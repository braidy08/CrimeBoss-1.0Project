#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_InputDeviceMappingManager.generated.h"

class UIGS_InputActionMapDataAsset;
class UIGS_InputDeviceIconsDataAsset;

UCLASS(Blueprintable)
class BF_INPUT_API UIGS_InputDeviceMappingManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceIconsDataAsset* PS5InputDeviceIconDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceIconsDataAsset* XBOXInputDeviceIconDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceIconsDataAsset* PCInputDeviceIconDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputActionMapDataAsset* InputActionMapDataAsset;
    
    UIGS_InputDeviceMappingManager();

};

