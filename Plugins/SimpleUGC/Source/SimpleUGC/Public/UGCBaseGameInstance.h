#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UGCBaseGameInstance.generated.h"

class UIGS_UGCModBase;
class UUGCRegistry;

UCLASS(Blueprintable, NonTransient)
class SIMPLEUGC_API UUGCBaseGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUGCRegistry* UGCRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_UGCModBase*> UGCModObjects;
    
    UUGCBaseGameInstance();

};

