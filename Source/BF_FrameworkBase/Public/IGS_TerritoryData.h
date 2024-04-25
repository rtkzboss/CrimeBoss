#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_RestrictedTagsHolder.h"
#include "IGS_TerritoryData.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_TerritoryData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIGS_RestrictedTagsHolder> RestrictedTagsHolders;
    
    UIGS_TerritoryData();

};

