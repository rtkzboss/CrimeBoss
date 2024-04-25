#pragma once
#include "CoreMinimal.h"
#include "IGS_PropMeshBase.h"
#include "IGS_PropMeshSpawner.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UIGS_PropMeshSpawner : public UIGS_PropMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* m_SpawnedMesh;
    
public:
    UIGS_PropMeshSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Despawn();
    
};

