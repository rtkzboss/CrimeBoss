#pragma once
#include "CoreMinimal.h"
#include "IGS_EditorDialogueInfo.h"
#include "IGS_EditorCutsceneInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_EditorCutsceneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_EditorDialogueInfo> Dialogues;
    
    FIGS_EditorCutsceneInfo();
};

