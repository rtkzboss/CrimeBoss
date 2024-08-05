#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_InteractiveWireBoxBase.h"
#include "IGS_WireBoxWireInfo.h"
#include "IGS_InteractiveWireBox.generated.h"

class USpotLightComponent;
class UStaticMesh;
class UTimelineComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_InteractiveWireBox : public AIGS_InteractiveWireBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor StatusFailColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* LightsTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpotLightComponent*> WireLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> WireCutMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FIGS_WireBoxWireInfo> mR_WiresInfo;
    
public:
    AIGS_InteractiveWireBox(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetWireLightState(int32 inWireIndex, bool inState);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_SetWireLight(int32 inWireIndex, bool inState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_SetFailStatus();
    
};

