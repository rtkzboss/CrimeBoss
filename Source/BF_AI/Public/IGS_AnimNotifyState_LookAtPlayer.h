#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "IGS_AnimNotifyState_LookAtPlayer.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BF_AI_API UIGS_AnimNotifyState_LookAtPlayer : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> m_Players;
    
    UIGS_AnimNotifyState_LookAtPlayer();

};

