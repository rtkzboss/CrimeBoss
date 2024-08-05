#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_MediaCondition.h"
#include "META_CutsceneCondition.generated.h"

class UDataAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_CutsceneCondition : public UMETA_MediaCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CutsceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ScreenAfterEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldBeDelayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpireTimerDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> CutsceneDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpirationTimerEnabled;
    
public:
    UMETA_CutsceneCondition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCutsceneID();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSoftObjectPtr<UDataAsset> GetCutsceneDataAsset();
    
};

