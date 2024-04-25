#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_ComplexPathFollowingComponent.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_ComplexPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptPartialPaths;
    
public:
    UIGS_ComplexPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectPointToNavigation(const FVector& inPoint, TSubclassOf<UNavigationQueryFilter> inFilterClass, FVector inQueryExtent, FVector& inProjectedLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceStopTransition();
    
};

