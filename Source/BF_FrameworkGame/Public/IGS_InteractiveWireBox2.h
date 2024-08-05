#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveWireBoxBase.h"
#include "IGS_InteractiveWireBox2.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UIGS_InteractiveComponent;
class UMaterialInterface;
class UPrimitiveComponent;
class UTimelineComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_InteractiveWireBox2 : public AIGS_InteractiveWireBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* LightsTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LightFailMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CutSuccessAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> LightColorMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> WireSpheresLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> WireSpheresRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> WireInteractiveComponents;
    
public:
    AIGS_InteractiveWireBox2(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLightsColors();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_SetLightFailColors(int32 inWireIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_SetLightColors(int32 inWireIndex, int32 inFirstColorIndex, int32 inSecondColorIndex);
    
};

