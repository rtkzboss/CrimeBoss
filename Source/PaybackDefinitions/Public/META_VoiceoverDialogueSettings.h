#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "META_VODialoguesCommonTypeSettings.h"
#include "META_VoiceoverDialogueSettings.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_VoiceoverDialogueSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterScreenSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultTypePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTypeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_VODialoguesCommonTypeSettings> CommonTypeSettings;
    
public:
    UMETA_VoiceoverDialogueSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_VODialoguesCommonTypeSettings GetTypeSettings(FGameplayTag inType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDelayAfterScreenSwitch();
    
};

