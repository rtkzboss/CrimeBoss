#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_MetaDialogueSpeakerKey.h"
#include "IGS_MetaDialogueSubsystemDataAsset.generated.h"

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_MetaDialogueSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_MetaDialogueSpeakerKey, FLinearColor> SpeakerSubtitleColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> CharacterNames;
    
    UIGS_MetaDialogueSubsystemDataAsset();

};

