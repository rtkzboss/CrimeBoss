#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_NavigationDebugSubsystem.generated.h"

class ANavigationData;

UCLASS(Blueprintable)
class BF_NAVIGATION_API UIGS_NavigationDebugSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavigationData* HumanNavmesh;
    
    UIGS_NavigationDebugSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnNavUpdated(ANavigationData* inNavData);
    
    UFUNCTION(BlueprintCallable)
    void NavigationFinished(ANavigationData* inNavigation);
    
};

