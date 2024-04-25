#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventPointReachedSignatureDelegate.h"
#include "EventPointDelegateHolder.generated.h"

UCLASS(Blueprintable)
class PATHFOLLOW_API UEventPointDelegateHolder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventPointReachedSignature OnEventPointReached;
    
    UEventPointDelegateHolder();

};

