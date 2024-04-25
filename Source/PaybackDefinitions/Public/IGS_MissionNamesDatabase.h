#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_ChainMissionNames.h"
#include "IGS_MetaMissionNames.h"
#include "IGS_QuickplayMissionNames.h"
#include "IGS_MissionNamesDatabase.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UIGS_MissionNamesDatabase : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaMissionNames MetaMissionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_QuickplayMissionNames QuickplayMissionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ChainMissionNames ChainMissionNames;
    
public:
    UIGS_MissionNamesDatabase();

};

