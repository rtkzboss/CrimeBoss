#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayAbilitySpec.h"
#include "IGS_SubControllerCommon.h"
#include "IGS_SubControllerHuman.generated.h"

class ACharacter;
class UIGS_AnalogControllerSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIGS_SubControllerHuman : public UIGS_SubControllerCommon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AnalogControllerSettings* AnalogControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle m_RunningAbilitySpecHandle;
    
public:
    UIGS_SubControllerHuman(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MessageToServer_StopUsingVehicle();
    
};

