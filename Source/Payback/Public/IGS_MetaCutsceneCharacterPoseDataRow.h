#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_MetaCutscenePoseSet.h"
#include "IGS_MetaCutsceneCharacterPoseDataRow.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneCharacterPoseDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueCharacter ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIGS_MetaCutscenePoseSet> PoseSetsMap;
    
    FIGS_MetaCutsceneCharacterPoseDataRow();
};

