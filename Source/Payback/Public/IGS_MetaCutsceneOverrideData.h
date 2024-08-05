#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneOverrideData.generated.h"

class AIGS_CharacterPaperDoll;

USTRUCT(BlueprintType)
struct FIGS_MetaCutsceneOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AIGS_CharacterPaperDoll>> OverrideSlotCharacterPaperDolls;
    
    PAYBACK_API FIGS_MetaCutsceneOverrideData();
};

