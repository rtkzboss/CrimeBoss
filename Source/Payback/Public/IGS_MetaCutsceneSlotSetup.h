#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueSpeaker.h"
#include "IGS_MetaCutsceneSlotSetup.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneSlotSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueSpeaker SlotASpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueSpeaker SlotBSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueSpeaker SlotCSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueSpeaker SlotDSpeaker;
    
    FIGS_MetaCutsceneSlotSetup();
};

