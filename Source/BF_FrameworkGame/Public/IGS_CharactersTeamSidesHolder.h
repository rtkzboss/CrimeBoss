#pragma once
#include "CoreMinimal.h"
#include "IGS_CharactersTeamSidesHolder.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_CharactersTeamSidesHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> Characters;
    
    FIGS_CharactersTeamSidesHolder();
};

