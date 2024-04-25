#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueSpeaker.h"
#include "IGS_MetaDialogueSpeakerKey.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MetaDialogueSpeakerKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueSpeaker Speaker;
    
    BF_VOICEOVER_API FIGS_MetaDialogueSpeakerKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_MetaDialogueSpeakerKey) { return 0; }

