#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_CorpseInteractiveComponent.generated.h"

class UIGS_CarryableInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CorpseInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_CarryableInventoryObject> BodyBagCarryable;
    
    UIGS_CorpseInteractiveComponent(const FObjectInitializer& ObjectInitializer);

};

