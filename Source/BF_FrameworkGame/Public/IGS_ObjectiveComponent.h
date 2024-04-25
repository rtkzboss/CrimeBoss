#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_ObjectiveComponentType.h"
#include "EIGS_ObjectiveState.h"
#include "IGS_ObjectiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ObjectiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ObjectiveComponentType ObjectiveComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimerObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ObjectiveState TaskState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCount;
    
public:
    UIGS_ObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTaskState(EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange);
    
    UFUNCTION(BlueprintCallable)
    void SetCount(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentCount() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearCount();
    
};

