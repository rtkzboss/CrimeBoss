#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IGS_BreakableWindowComponent.h"
#include "InstancedBreakableWindowParam.h"
#include "OnInstanceBreakableStateChangedDelegateDelegate.h"
#include "IGS_InstancedBreakableWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InstancedBreakableWindow : public UIGS_BreakableWindowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstanceBreakableStateChangedDelegate OnInstanceBroken;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IgnoreSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FInstancedBreakableWindowParam> mR_BreakableWindowInstances;
    
public:
    UIGS_InstancedBreakableWindow(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void HideWindowInstance(const int32& InstanceIndex);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_ImpactInstance(FVector_NetQuantize Location, int32 InstanceIndex);
    
};

