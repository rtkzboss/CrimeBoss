#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_PerkGroup.h"
#include "IGS_PerksCustomizationScreen.generated.h"

class UIGS_Quickplay_BlackMarketManagerComponent;
class UIGS_Quickplay_CrewManagerComponent;
class UIGS_Quickplay_FinanceManagerComponent;
class UIGS_Quickplay_StashManagerComponent;
class UIGS_UnlockManager;
class UMETA_BossCharacter;
class UMETA_Perk;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_PerksCustomizationScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_StashManagerComponent* MultiplayerStashManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_BlackMarketManagerComponent* MultiplayerBlackMarketManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_CrewManagerComponent* MultiplayerCrewManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Quickplay_FinanceManagerComponent* MultiplayerFinanceManagerComopnent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_UnlockManager* UnlockManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BossCharacter* BossCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_PerkGroup> GroupedAllPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_PerkGroup> GroupedOwnedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_PerkGroup> GroupedPurchasablePerks;
    
public:
    UIGS_PerksCustomizationScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void SetGrouppedPerks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_PerkGroup GetPerkGroupByPerkTag(FGameplayTag inTag, UPARAM(Ref) TArray<FIGS_PerkGroup>& inPerkGroups) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Perk* GetOwnedPerkMaxTier(UPARAM(Ref) FIGS_PerkGroup& InGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_PerkGroup> GetGroupedPerks(TArray<UMETA_Perk*> inPerks) const;
    
};

