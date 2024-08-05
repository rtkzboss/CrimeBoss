#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttributeSet.h"
#include "META_PerkStatGroup.h"
#include "META_PerkStatsData.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_PerkStatsData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RichTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_PerkStatGroup> StatGroups;
    
public:
    UMETA_PerkStatsData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultRichTextStyleTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCombinedStatGroupsFromAttributes(const TMap<FGameplayAttribute, float>& inAttributes, bool& outSuccess, TMap<FMETA_PerkStatGroup, int32>& outStatGroups) const;
    
};

