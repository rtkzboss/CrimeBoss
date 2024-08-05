#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_CoverPreset.h"
#include "IGS_FollowSettings.h"
#include "IGS_SettingsHelpersLibrary.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_AI_API UIGS_SettingsHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_SettingsHelpersLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UseCoverInCombatRange(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetTotalTimeInCover(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetTimeInCover(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetStrafeShootingChance(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetReactionThrashTreshold(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetReactionTargetFirstTimeSeenCooldown(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetReactionRollToCoverCooldown(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetReactionCooldown(AIGS_AIControllerGame* Controller, bool Randomize);
    
    UFUNCTION(BlueprintCallable)
    static float GetMaxHealthForReaction(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetMaxHealthForCover(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_FollowSettings GetFollowSettings(AIGS_GameCharacterFramework* Character);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_CoverPreset GetCoverPreset(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetCombatRangeMin(AIGS_AIControllerGame* InController, const bool inRawValue);
    
    UFUNCTION(BlueprintCallable)
    static float GetCombatRangeMax(AIGS_AIControllerGame* InController, const bool inRawValue);
    
    UFUNCTION(BlueprintCallable)
    static float GetCombatMoveCooldown(AIGS_AIControllerGame* Controller);
    
};

