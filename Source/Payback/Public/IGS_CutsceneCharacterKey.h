#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "IGS_CutsceneCharacterKey.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_CutsceneCharacterKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueCharacter CharacterID;
    
    FIGS_CutsceneCharacterKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_CutsceneCharacterKey) { return 0; }

