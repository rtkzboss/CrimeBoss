#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DownStateHandlerComponentFramework.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_DownStateHandlerComponentFramework : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool UseDownState;
    
    UIGS_DownStateHandlerComponentFramework(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Revive(APawn* healer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReviveTime(APawn* healer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownStateLengthInSeconds() const;
    
};

