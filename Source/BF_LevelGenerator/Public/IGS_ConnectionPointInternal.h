#pragma once
#include "CoreMinimal.h"
#include "EIGS_Event.h"
#include "IGS_ConnectionPointBase.h"
#include "IGS_ConnectionPointInternal.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API AIGS_ConnectionPointInternal : public AIGS_ConnectionPointBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_Event> Event;
    
    AIGS_ConnectionPointInternal(const FObjectInitializer& ObjectInitializer);

};

