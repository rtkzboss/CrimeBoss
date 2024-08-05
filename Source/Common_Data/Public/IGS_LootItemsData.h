#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_LootSize.h"
#include "IGS_GenericItemsData.h"
#include "IGS_LootItemsData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_LootItemsData : public FIGS_GenericItemsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LootSize LootSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SmallHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LootCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StandMesh;
    
    FIGS_LootItemsData();
};

