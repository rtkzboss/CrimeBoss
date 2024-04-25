#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueSpeaker.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_EditorCutsceneInfo.h"
#include "IGS_MetaCutsceneCharacters.h"
#include "IGS_MetaCutsceneDataRow.h"
#include "IGS_MetaCutsceneFunctionLibrary.generated.h"

class UDataTable;
class UIGS_MetaCutsceneDataAsset;
class ULevelStreaming;
class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_MetaCutsceneFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_MetaCutsceneFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RefreshCutsceneID(UPARAM(Ref) FIGS_MetaCutsceneDataRow& inCutsceneRow);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_MetaDialogueCharacter GetMetaCharacterFromSpeaker(const FIGS_MetaCutsceneCharacters& inCharacterParameters, EIGS_MetaDialogueSpeaker inSpeaker);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetCutsceneDatabase();
    
    UFUNCTION(BlueprintCallable)
    static TArray<ULevelStreaming*> GetAllStreamedLevel(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_EditorCutsceneInfo GetAllDialoguesForCutscene(UObject* inWCO, UIGS_MetaCutsceneDataAsset* inCutsceneData, FIGS_MetaCutsceneCharacters inCharacterParameters);
    
};

