#pragma once
#include "CoreMinimal.h"
#include "IGS_SenseHolder.h"
#include "IGS_SuspicionComponentHolder.generated.h"

class AActor;
class UIGS_SuspicionComponent;

USTRUCT(BlueprintType)
struct FIGS_SuspicionComponentHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_SuspicionComponent> SuspicionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SuspicionComponentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SenseHolder SenseHolder;
    
    BF_AI_API FIGS_SuspicionComponentHolder();
};

