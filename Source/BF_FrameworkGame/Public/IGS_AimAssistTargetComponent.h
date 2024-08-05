#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AimAssistSocketData.h"
#include "IGS_AimAssistTargetComponent.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AimAssistTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAimAssistActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AimAssistSocketData> AimTargetSockets;
    
public:
    UIGS_AimAssistTargetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupSockets(const TArray<FIGS_AimAssistSocketData>& inAimTargetSockets);
    
    UFUNCTION(BlueprintCallable)
    void SetAimAssistTargetActive(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void Init(UMeshComponent* InMesh);
    
};

