#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IGS_GameModeMenu.generated.h"

UCLASS(Blueprintable, NonTransient)
class BF_FRAMEWORKBASE_API AIGS_GameModeMenu : public AGameModeBase {
    GENERATED_BODY()
public:
    AIGS_GameModeMenu(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuitLobby();
    
};

