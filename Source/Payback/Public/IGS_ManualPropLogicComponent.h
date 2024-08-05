#pragma once
#include "CoreMinimal.h"
#include "IGS_PropLogicComponent.h"
#include "IGS_ManualPropLogicComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIGS_ManualPropLogicComponent : public UIGS_PropLogicComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateAutomatically;
    
    UIGS_ManualPropLogicComponent(const FObjectInitializer& ObjectInitializer);

};

