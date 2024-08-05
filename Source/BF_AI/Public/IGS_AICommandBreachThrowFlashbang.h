#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachThrowFlashbang.generated.h"

class AIGS_GrenadeProjectileBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandBreachThrowFlashbang : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GrenadeProjectileBase* Grenade;
    
    UIGS_AICommandBreachThrowFlashbang();

};

