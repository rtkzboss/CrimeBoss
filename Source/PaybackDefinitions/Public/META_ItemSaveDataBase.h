#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_ItemSaveDataBase.generated.h"

USTRUCT(BlueprintType)
struct FMETA_ItemSaveDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag itemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnseenInShop;
    
    PAYBACKDEFINITIONS_API FMETA_ItemSaveDataBase();
};

