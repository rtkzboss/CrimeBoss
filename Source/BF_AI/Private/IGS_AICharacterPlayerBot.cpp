#include "IGS_AICharacterPlayerBot.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_DownStateHandlerComponent.h"
#include "IGS_ListInventory.h"
#include "IGS_LootBagComponent.h"
#include "IGS_LootBagInteractiveComponent.h"
#include "IGS_PlayerDamageHandlerComponent.h"
#include "IGS_PlayerGASComponent.h"
#include "IGS_PlayerLoadoutComponent.h"
#include "IGS_PlayerMetaTransferComponent.h"
#include "IGS_PlayerStatus.h"
#include "IGS_SuppressionHandlerComponent.h"
#include "IGS_NetworkComponentCharacter.h"
#include "Engine/EngineTypes.h"

ADEPRECATED_IGS_AICharacterPlayerBot::ADEPRECATED_IGS_AICharacterPlayerBot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_PlayerStatus>(TEXT("Object Status")).SetDefaultSubobjectClass<UIGS_PlayerDamageHandlerComponent>(TEXT("DamageHandlerComponent2")).SetDefaultSubobjectClass<UIGS_PlayerGASComponent>(TEXT("GASComponent"))) {
    this->bUseControllerRotationYaw = false;
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->AIControllerClass = NULL;
    this->DownStateHandlerComponent = CreateDefaultSubobject<UIGS_DownStateHandlerComponent>(TEXT("DownStateHandlerComponent"));
    this->LootBagComponent = CreateDefaultSubobject<UIGS_LootBagComponent>(TEXT("LootBagComponent"));
    this->PlayerLoadoutComponent = CreateDefaultSubobject<UIGS_PlayerLoadoutComponent>(TEXT("PlayerLoadoutComponent"));
    this->BotInventory = CreateDefaultSubobject<UIGS_ListInventory>(TEXT("BotInventory"));
    this->PlayerMetaTransferComponent = CreateDefaultSubobject<UIGS_PlayerMetaTransferComponent>(TEXT("PlayerMetaTransferComponent"));
    this->BotSuppressionHandlerComponent = CreateDefaultSubobject<UIGS_SuppressionHandlerComponent>(TEXT("SuppressionHandlerCapsuleComponent"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->LootBagInteractiveComponent = CreateDefaultSubobject<UIGS_LootBagInteractiveComponent>(TEXT("LootBagInteractiveComponent"));
    this->NetworkCharacter = CreateDefaultSubobject<UIGS_NetworkComponentCharacter>(TEXT("NetworkComponentCharacter"));
    this->BotSuppressionHandlerComponent->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->LootBagInteractiveComponent->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
}


