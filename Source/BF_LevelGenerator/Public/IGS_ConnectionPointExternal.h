#pragma once
#include "CoreMinimal.h"
#include "IGS_ConnectionPointBase.h"
#include "IGS_ConnectionPointExternal.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API AIGS_ConnectionPointExternal : public AIGS_ConnectionPointBase {
    GENERATED_BODY()
public:
    AIGS_ConnectionPointExternal(const FObjectInitializer& ObjectInitializer);

};

