#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "EIGS_AIMontageBreachVariant.h"
#include "IGS_BreachPointComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BreachPointComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AIMontageBreachVariant BreachMontageVariant;
    
    UIGS_BreachPointComponent(const FObjectInitializer& ObjectInitializer);

};

