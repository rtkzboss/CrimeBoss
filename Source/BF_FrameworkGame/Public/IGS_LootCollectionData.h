#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_LootCollectionData.generated.h"

class AIGS_LootCollectionBase;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_LootCollectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LootCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_LootCollectionBase> LootCollection;
    
    FIGS_LootCollectionData();
};

