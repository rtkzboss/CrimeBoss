#pragma once
#include "CoreMinimal.h"
#include "IGS_AIPassengerSpawnComponentBase.h"
#include "IGS_HeliSpawnInfo.h"
#include "IGS_AIHeliSpawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AIHeliSpawnComponent : public UIGS_AIPassengerSpawnComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GetOutAnimationDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_HeliSpawnInfo> m_HeliSpawnInfos;
    
public:
    UIGS_AIHeliSpawnComponent(const FObjectInitializer& ObjectInitializer);

};

