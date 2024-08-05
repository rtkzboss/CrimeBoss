#pragma once
#include "CoreMinimal.h"
#include "META_MediaCondition.h"
#include "META_TextScreenCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_TextScreenCondition : public UMETA_MediaCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScreenText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SecondaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    UMETA_TextScreenCondition();

};

