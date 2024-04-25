#pragma once
#include "CoreMinimal.h"
#include "IGS_AIUnitCharacterData.generated.h"

class AIGS_AIControllerFramework;
class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIUnitCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_AIControllerFramework> Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AIGS_GameCharacterFramework>> Pawns;
    
    FIGS_AIUnitCharacterData();
};

