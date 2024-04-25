#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_GraphStatus.h"
#include "META_Interval.h"
#include "META_PlotlineGraphStartTime.h"
#include "META_UniqueCharacterGraphInfo.h"
#include "META_GraphsData.generated.h"

class UMETA_BaseStoryGraphManager;

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_GraphsData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval FirstPlotlineDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval SecondPlotlineDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AnyNextPlotlineDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> StartedGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterGraphInfo> CharacterStoryGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_PlotlineGraphStartTime> PlotlineGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> CrewRandEventsGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> SpecialCrewEventsGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> EntitlementGraphs;
    
public:
    UMETA_GraphsData();

    UFUNCTION(BlueprintCallable)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> GetStartedGraphs(const TArray<EIGS_CharacterID>& inAvailableUniqueCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetSpecialCrewEventsGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetSecondPlotlineDays() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_PlotlineGraphStartTime> GetPlotlineGraphs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetFirstPlotlineDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> GetEntitlementsGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetCrewRandEventsGraph() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterGraphInfo(EIGS_CharacterID inCharacterID, bool& outFind, FMETA_UniqueCharacterGraphInfo& outGraphInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetAnyNextPlotlineDays() const;
    
};

