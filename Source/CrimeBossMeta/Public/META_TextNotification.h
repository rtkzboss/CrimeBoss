#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_TextNotification.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_TextNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
    UMETA_TextNotification();

    UFUNCTION(BlueprintCallable)
    void SetOption(FText inOption);
    
};

