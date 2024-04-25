#pragma once
#include "CoreMinimal.h"
#include "IGS_NewsInfoRelatedSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_NewsInfoRelatedSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> PatchNotesVersionsSeen;
    
    FIGS_NewsInfoRelatedSaveData();
};

