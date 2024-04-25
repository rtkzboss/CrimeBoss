#pragma once
#include "CoreMinimal.h"
#include "IGS_DetectorBase.h"
#include "IGS_SecurityCamera.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SecurityCamera : public AIGS_DetectorBase {
    GENERATED_BODY()
public:
    AIGS_SecurityCamera(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWireCut(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticWireCut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticWireCut();
    
};

