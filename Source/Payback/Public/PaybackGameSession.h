#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "PaybackGameSession.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackGameSession : public AGameSession {
    GENERATED_BODY()
public:
    APaybackGameSession(const FObjectInitializer& ObjectInitializer);

};

