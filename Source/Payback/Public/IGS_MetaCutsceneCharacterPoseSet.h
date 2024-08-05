#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "GameplayTagContainer.h"
#include "IGS_MetaCutsceneCharacterPoseSet.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneCharacterPoseSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_MetaDialogueCharacterSlot, FGameplayTagContainer> CharacterPoses;
    
    FIGS_MetaCutsceneCharacterPoseSet();
};

