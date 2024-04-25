#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkBase.h"
#include "IGS_NavLink.generated.h"

class UIGS_NavLinkComponentBase;

UCLASS(Blueprintable)
class BF_AI_API AIGS_NavLink : public AIGS_NavLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NavLinkComponentBase* LinkComponent;
    
    AIGS_NavLink(const FObjectInitializer& ObjectInitializer);

};

