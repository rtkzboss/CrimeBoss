#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "IGS_CustomSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CustomSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVisibleTroughWalls: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
public:
    UIGS_CustomSphereComponent(const FObjectInitializer& ObjectInitializer);

};

