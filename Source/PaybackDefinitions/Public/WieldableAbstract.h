#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WieldableAbstract.generated.h"

UCLASS(Abstract, Blueprintable)
class PAYBACKDEFINITIONS_API AWieldableAbstract : public AActor {
    GENERATED_BODY()
public:
    AWieldableAbstract(const FObjectInitializer& ObjectInitializer);

};

