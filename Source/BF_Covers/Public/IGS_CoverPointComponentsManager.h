#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CoverPointComponentsManager.generated.h"

class ANavigationData;
class UIGS_CoverPointComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_COVERS_API UIGS_CoverPointComponentsManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCheckMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_CoverPointComponent*> CoverPointComponents;
    
public:
    UIGS_CoverPointComponentsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCoverPointComponents(const TArray<UIGS_CoverPointComponent*>& inComponents);
    
    UFUNCTION(BlueprintCallable)
    void OnNavigationBuildFinished(ANavigationData* inNavData);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCovers();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCovers();
    
};

