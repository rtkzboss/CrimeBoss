#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "META_CampaignModeMapping.h"
#include "META_PlotlineSelectionMapping.generated.h"

class UMETA_PlotlineSelection;

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_PlotlineSelectionMapping : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_PlotlineSelection> DefaultCampaignMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UMETA_PlotlineSelection>> CampaignModesMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_CampaignModeMapping> CampaignModeMappings;
    
public:
    UMETA_PlotlineSelectionMapping();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMETA_PlotlineSelection> GetDefaultCampaignMode() const;
    
};

