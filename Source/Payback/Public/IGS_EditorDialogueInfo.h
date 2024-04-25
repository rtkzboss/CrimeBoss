#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaDialogueVariationData.h"
#include "IGS_EditorDialogueInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_EditorDialogueInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MetaDialogueVariationData> Lines;
    
    FIGS_EditorDialogueInfo();
};

