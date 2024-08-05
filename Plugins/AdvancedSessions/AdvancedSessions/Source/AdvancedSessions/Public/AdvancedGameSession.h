#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AdvancedGameSession.generated.h"

UCLASS(Blueprintable)
class AAdvancedGameSession : public AGameSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FText> BanList;
    
    AAdvancedGameSession(const FObjectInitializer& ObjectInitializer);

};

