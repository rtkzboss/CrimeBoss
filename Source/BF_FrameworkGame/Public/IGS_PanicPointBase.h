#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_PanicPointBase.generated.h"

class UIGS_PanicPointComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PanicPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PanicPointComponent* PanicPointComponent;
    
    AIGS_PanicPointBase(const FObjectInitializer& ObjectInitializer);

};

