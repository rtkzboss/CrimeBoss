#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_HighlightableWidget.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UIGS_HighlightableWidget : public UInterface {
    GENERATED_BODY()
};

class IIGS_HighlightableWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsHighlighted(bool inHighlighted);
    
};

