#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_LootCollectionObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_LootCollectionObject : public UObject {
    GENERATED_BODY()
public:
    UIGS_LootCollectionObject();

};

