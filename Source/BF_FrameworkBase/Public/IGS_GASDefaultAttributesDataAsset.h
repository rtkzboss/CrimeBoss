#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "IGS_GASDefaultAttributesDataAsset.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GASDefaultAttributesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> AttributeInitGEs;
    
    UIGS_GASDefaultAttributesDataAsset();

};

