#pragma once
#include "CoreMinimal.h"
#include "IGS_IntelligentGameCharacter.h"
#include "IGS_AIGameCharacter.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AIGameCharacter : public AIGS_IntelligentGameCharacter {
    GENERATED_BODY()
public:
    AIGS_AIGameCharacter(const FObjectInitializer& ObjectInitializer);

};

