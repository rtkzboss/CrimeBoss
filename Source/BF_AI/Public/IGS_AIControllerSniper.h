#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerSniper.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerSniper : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerSniper(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) const;
    
};

