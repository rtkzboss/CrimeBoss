#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_StaticMeshPenetrableActor.generated.h"

class UIGS_MeshOverlappableComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_StaticMeshPenetrableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_MeshOverlappableComponent* MeshOverlappableComponent;
    
public:
    AIGS_StaticMeshPenetrableActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetMobility(TEnumAsByte<EComponentMobility::Type> inMobility);
    
};

