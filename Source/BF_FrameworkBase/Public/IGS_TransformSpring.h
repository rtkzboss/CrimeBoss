#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESpringTypeEnum.h"
#include "IGS_TransformSpring.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_TransformSpring : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRate;
    
public:
    UIGS_TransformSpring(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTarget(USceneComponent* inTargetComponent, TEnumAsByte<ESpringTypeEnum::Type> inSpringType);
    
    UFUNCTION(BlueprintCallable)
    void AddVelocity(const FVector& inVelocity);
    
};

