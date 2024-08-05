#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "IGS_CommonItemData.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SuspicionComponent.generated.h"

class AIGS_GameCharacterFramework;
class IGenericTeamAgentInterface;
class UGenericTeamAgentInterface;
class IIGS_GameplayTagAssetInterfaceCustom;
class UIGS_GameplayTagAssetInterfaceCustom;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SuspicionComponent : public UAIPerceptionStimuliSourceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePerceptionOnOffenceReported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoticedWantsReactionRearmDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideTeamSide: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSideOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> m_OwningCharacter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGenericTeamAgentInterface> m_OwningActorTeamAgentInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IIGS_GameplayTagAssetInterfaceCustom> m_OwningActorGameplayTagAssetInterfaceCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> IgnoredBy;
    
public:
    UIGS_SuspicionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOwner(AIGS_GameCharacterFramework* inNewOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoredBy(const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePerceptionOnOffenceReported(bool inDisablePerceptionOnOffenceReported);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoredBy(AIGS_GameCharacterFramework* inTest) const;
    
    UFUNCTION(BlueprintCallable)
    void InitOffences(const FGameplayTagContainer& inOffences);
    
    UFUNCTION(BlueprintCallable)
    void InitFromItem(const FIGS_CommonItemData& inItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetOffences() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePerception();
    
    UFUNCTION(BlueprintCallable)
    void DisablePerception();
    
};

