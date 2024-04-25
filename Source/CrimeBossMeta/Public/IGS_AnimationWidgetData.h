#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimationWidgetData.generated.h"

class UIGS_AnimatedWidget;
class UObject;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_AnimationWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AnimatedWidget* AnimatedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PayloadData;
    
    FIGS_AnimationWidgetData();
};

