#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_DialogueSpeakerKey.h"
#include "IGS_DialogueLevelName.h"
#include "IGS_DialogueLineOverrideData.h"
#include "IGS_DialogueOverrideData.h"
#include "IGS_DialogueOverrideDataKey.h"
#include "IGS_VoiceoverSubsystemDataAsset.generated.h"

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_VoiceoverSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PreloadLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DialogueGroupCharacterHolder> PreloadCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DialogueLevelName> LevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BlacklistLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_DialogueOverrideDataKey, FIGS_DialogueOverrideData> OverrideDialogueData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_DialogueOverrideDataKey, FIGS_DialogueLineOverrideData> OverrideLineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_DialogueSpeakerKey, FLinearColor> SpeakerSubtitleColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FLinearColor> HeisterSpeakerSubtitleColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> CharacterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DialogueGroupCharacterHolder> DebugRestrictedCharacters;
    
    UIGS_VoiceoverSubsystemDataAsset();

};

