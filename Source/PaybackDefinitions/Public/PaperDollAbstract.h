#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperDollAbstract.generated.h"

UCLASS(Abstract, Blueprintable)
class PAYBACKDEFINITIONS_API APaperDollAbstract : public AActor {
    GENERATED_BODY()
public:
    APaperDollAbstract(const FObjectInitializer& ObjectInitializer);

};

