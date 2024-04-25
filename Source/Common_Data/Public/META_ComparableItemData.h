#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "META_ComparableItemData.generated.h"

class UMETA_ComparableItemData;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UMETA_ComparableItemData : public UObject {
    GENERATED_BODY()
public:
    UMETA_ComparableItemData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Compare(UMETA_ComparableItemData* inItemData);
    
};

