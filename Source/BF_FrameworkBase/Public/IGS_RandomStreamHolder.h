#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "IGS_RandomStreamHolder.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_RandomStreamHolder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UIGS_RandomStreamHolder();

};

