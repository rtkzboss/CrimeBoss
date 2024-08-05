#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DamageHandlerComponentFramework.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_DamageHandlerComponentFramework : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* HeadPhysicalMaterial;
    
    UIGS_DamageHandlerComponentFramework(const FObjectInitializer& ObjectInitializer);

};

