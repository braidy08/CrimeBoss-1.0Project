#pragma once
#include "CoreMinimal.h"
#include "AkAcousticTextureSetComponent.h"
#include "AkSurfacePoly.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSurfaceReflectors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkSurfacePoly> AcousticPolys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkSurfacePoly> AcousticPolys2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDiffraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDiffractionOnBoundaryEdges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AssociatedRoom;
    
    UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void SendSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSurfaceReflectorSet();
    
};

