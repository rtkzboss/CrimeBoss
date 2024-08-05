#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SquadClassDefinition.h"
#include "IGS_SquadClassesHolder.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SquadClassesHolder : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_TeamSideEnum, FIGS_SquadClassDefinition> SquadClasses;
    
    UIGS_SquadClassesHolder();

};

