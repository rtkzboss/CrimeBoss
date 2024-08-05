#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkComponentBase.h"
#include "IGS_NavLinkZiplineComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkZiplineComponent : public UIGS_NavLinkComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutAnimation;
    
    UIGS_NavLinkZiplineComponent(const FObjectInitializer& ObjectInitializer);

};

