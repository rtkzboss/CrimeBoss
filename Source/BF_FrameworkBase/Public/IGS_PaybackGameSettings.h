#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TeamSideAffinitiesHolder.h"
#include "IGS_PaybackGameSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BF_FRAMEWORKBASE_API UIGS_PaybackGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_TeamSideEnum, FColor> TeamSideColors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_TeamSideEnum, FIGS_TeamSideAffinitiesHolder> TeamSideAffinitiesMap;
    
    UIGS_PaybackGameSettings();

};

