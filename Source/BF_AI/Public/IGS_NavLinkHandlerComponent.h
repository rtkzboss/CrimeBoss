#pragma once
#include "CoreMinimal.h"
#include "IGS_TransitionHandlerBaseComponent.h"
#include "IGS_NavLinkHandlerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkHandlerComponent : public UIGS_TransitionHandlerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSlideForLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUseDoors;
    
public:
    UIGS_NavLinkHandlerComponent(const FObjectInitializer& ObjectInitializer);

};

