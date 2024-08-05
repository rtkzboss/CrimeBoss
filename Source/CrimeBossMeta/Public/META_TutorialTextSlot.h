#pragma once
#include "CoreMinimal.h"
#include "EMETA_TutorialBubbleDirection.h"
#include "META_TutorialWidgetBase.h"
#include "META_TutorialTextSlot.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_TutorialTextSlot : public UMETA_TutorialWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_TutorialBubbleDirection Direction;
    
    UMETA_TutorialTextSlot();

};

