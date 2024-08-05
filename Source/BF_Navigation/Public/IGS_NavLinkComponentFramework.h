#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "OnMoveLeftLinkDelegate.h"
#include "OnMoveReachedLinkDelegate.h"
#include "IGS_NavLinkComponentFramework.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NAVIGATION_API UIGS_NavLinkComponentFramework : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveReachedLink OnMoveReachedLink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveReachedLink OnTransitionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveLeftLink OnMoveLeftLink;
    
    UIGS_NavLinkComponentFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMovingAgents() const;
    
};

