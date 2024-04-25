#pragma once
#include "CoreMinimal.h"
#include "GenericGraphManager.h"
#include "META_BaseStoryGraphManager.generated.h"

UCLASS(Abstract, Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_BaseStoryGraphManager : public UGenericGraphManager {
    GENERATED_BODY()
public:
    UMETA_BaseStoryGraphManager();

};

