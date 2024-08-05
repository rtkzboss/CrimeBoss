#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_MetaDialogueVariationData.h"
#include "IGS_MetaDialogueLineTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaDialogueLineTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MetaDialogueVariationData> Variations;
    
    FIGS_MetaDialogueLineTableRow();
};

