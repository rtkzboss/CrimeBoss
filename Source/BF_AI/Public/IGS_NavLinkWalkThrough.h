#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkBase.h"
#include "IGS_NavLinkWalkThrough.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_NavLinkWalkThrough : public AIGS_NavLinkBase {
    GENERATED_BODY()
public:
    AIGS_NavLinkWalkThrough(const FObjectInitializer& ObjectInitializer);

};

