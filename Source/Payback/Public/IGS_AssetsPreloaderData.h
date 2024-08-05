#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_AssetsPreloaderData.generated.h"

class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_AssetsPreloaderData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> AdditionalClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> AdditionalObjects;
    
    UIGS_AssetsPreloaderData();

};

