#pragma once
#include "CoreMinimal.h"
#include "IGS_GameInstanceFramework.h"
#include "PaybackGameInstance.generated.h"

class UPaybackCoreMapsData;

UCLASS(Blueprintable, NonTransient)
class PAYBACK_API UPaybackGameInstance : public UIGS_GameInstanceFramework {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaybackCoreMapsData* CoreMapsData;
    
public:
    UPaybackGameInstance();

};

