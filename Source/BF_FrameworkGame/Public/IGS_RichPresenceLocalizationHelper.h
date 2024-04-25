#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "IGS_RichPresenceLocalizationHelper.generated.h"

class UIGS_ChainContractID;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_RichPresenceLocalizationHelper : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_RichPresenceLocalizationHelper();

    UFUNCTION(BlueprintCallable)
    static FText GetMissionName(const UObject* WCO, FGameplayTag MissionTag, bool& Succeeded);
    
    UFUNCTION(BlueprintCallable)
    static FText GetChainName(const UObject* WCO, TSubclassOf<UIGS_ChainContractID> ChainID, bool& Succeeded);
    
};

