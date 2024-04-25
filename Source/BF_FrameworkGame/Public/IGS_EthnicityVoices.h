#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_Ethnicity.h"
#include "IGS_EthnicityVoiceArray.h"
#include "IGS_EthnicityVoices.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_EthnicityVoices : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_Ethnicity, FIGS_EthnicityVoiceArray> MaleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_Ethnicity, FIGS_EthnicityVoiceArray> FemaleMap;
    
    UIGS_EthnicityVoices();

};

