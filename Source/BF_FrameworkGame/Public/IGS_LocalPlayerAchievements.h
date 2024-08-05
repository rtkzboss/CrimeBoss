#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_Achievement.h"
#include "IGS_LocalPlayerAchievementsInitializedDelegate.h"
#include "IGS_LocalPlayerAchievements.generated.h"

class UIGS_CommonAchievements;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_LocalPlayerAchievements : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LocalPlayerAchievementsInitialized OnInitialized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_CommonAchievements* m_CommonAchievements;
    
public:
    UIGS_LocalPlayerAchievements();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAchievementData(const FGameplayTag& AchievementID, bool& outFound, FIGS_Achievement& outAchievementData);
    
};

