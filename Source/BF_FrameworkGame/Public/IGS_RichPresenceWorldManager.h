#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_RichPresenceParam.h"
#include "IGS_RichPresenceWorldManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_RichPresenceWorldManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_RichPresenceWorldManager();

    UFUNCTION(BlueprintCallable)
    static void SetRichPresence(const UObject* WCO, FGameplayTag MessageID, const TArray<FIGS_RichPresenceParam>& MessageParams);
    
};

