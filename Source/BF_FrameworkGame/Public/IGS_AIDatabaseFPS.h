#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ControllerDefaultsHolder.h"
#include "IGS_AIBackupTeamDef.h"
#include "IGS_AIBaseDisabledSpecializations.h"
#include "IGS_AIBaseUnitDef.h"
#include "IGS_AICaptainSpecDef.h"
#include "IGS_AICivilianTeamDef.h"
#include "IGS_AICopTeamDef.h"
#include "IGS_AIDetectiveHolder.h"
#include "IGS_AIEmployeeTeamDef.h"
#include "IGS_AIGangsterTeamDef.h"
#include "IGS_AIGuardTeamDef.h"
#include "IGS_AILoadout.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_AISwatTeamDef.h"
#include "IGS_GeneralReactionTeamHolder.h"
#include "IGS_PlayerCountAIDifficultyModifierDef.h"
#include "IGS_PlayerCountBotDamageReceivedModifierDef.h"
#include "IGS_PlayerCountThrowableCooldownModifierDef.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIDatabaseFPS.generated.h"

class AIGS_AISpawnPoint;
class AIGS_GameCharacterFramework;
class UIGS_AIDatabaseStory;
class UIGS_SettingsID;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AIDatabaseFPS : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AICivilianTeamDef Civilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIEmployeeTeamDef Employees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AICopTeamDef Cops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveHolder Detectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGuardTeamDef Guards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatTeamDef SWATs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterTeamDef DollarDragon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterTeamDef Hielo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterTeamDef KarolKhan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterTeamDef Cagnali;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIBackupTeamDef Backup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_SettingsID>, FIGS_AILoadoutHolder> LoadoutOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerCountAIDifficultyModifierDef PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerCountThrowableCooldownModifierDef ThrowableCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerCountBotDamageReceivedModifierDef BotDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AIGS_GameCharacterFramework>, FIGS_AIBaseUnitDef> VIPs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AICaptainSpecDef Captains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerDefaultsHolder DefaultControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GeneralReactionTeamHolder GeneralReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AIDatabaseStory* StoryDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIBaseDisabledSpecializations DisabledSpecializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CanEdit;
    
    UIGS_AIDatabaseFPS();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_AILoadout GetLoadout(const FIGS_AILoadoutHolder& inLoadoutHolder, const AIGS_AISpawnPoint* inSpawnPoint, bool inIsStory) const;
    
};

