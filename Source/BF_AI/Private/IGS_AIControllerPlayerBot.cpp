#include "IGS_AIControllerPlayerBot.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_AIPlayerBotSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"
#include "IGS_PlayerBotControllerComponent.h"
#include "IGS_ScriptableBehaviorComponentBot.h"

AIGS_AIControllerPlayerBot::AIGS_AIControllerPlayerBot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_ScriptableBehaviorComponentBot>(TEXT("Scriptable Behavior"))) {
    (*this).m_PlayerBotComponent = CreateDefaultSubobject<UIGS_PlayerBotControllerComponent>(TEXT("m_PlayerBotComponent"));
    (*this).AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    (*this).ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    (*this).SettingsComponent = CreateDefaultSubobject<UIGS_AIPlayerBotSettingsComponent>(TEXT("SettingsComponent"));
    (*this).bWantsPlayerState = true;
}


