#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkBase.h"
#include "IGS_NavLinkJump.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_NavLinkJump : public AIGS_NavLinkBase {
    GENERATED_BODY()
public:
    AIGS_NavLinkJump(const FObjectInitializer& ObjectInitializer);

};

