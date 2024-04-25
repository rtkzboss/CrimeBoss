#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponentsHolder.generated.h"

class UIGS_InteractiveComponent;

USTRUCT(BlueprintType)
struct FIGS_InteractiveComponentsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_InteractiveComponent> InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    PAYBACK_API FIGS_InteractiveComponentsHolder();
};

