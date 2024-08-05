#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IGS_GameModeFramework.generated.h"

class APlayerState;
class UObject;

UCLASS(Blueprintable, NonTransient)
class BF_FRAMEWORKBASE_API AIGS_GameModeFramework : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> InactivePlayerArray;
    
    AIGS_GameModeFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayersImmortal(bool inImmortal);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyHeisterAlive(UObject* inWCO);
    
};

