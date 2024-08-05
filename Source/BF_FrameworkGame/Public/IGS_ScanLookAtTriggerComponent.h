#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ScanLookAtTriggerComponent.generated.h"

class AActor;
class UIGS_LookAtTriggerComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ScanLookAtTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScanEnabled;
    
public:
    UIGS_ScanLookAtTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScanEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreComponents(TArray<UPrimitiveComponent*> inIgnoreActorComponents);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreActors(TArray<AActor*> inIgnoreActors);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Trigger(UIGS_LookAtTriggerComponent* inInteractiveComponent);
    
};

