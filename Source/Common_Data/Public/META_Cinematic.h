#pragma once
#include "CoreMinimal.h"
#include "META_BaseMission.h"
#include "META_BaseMissionSave.h"
#include "META_CinematicMissionRowInfo.h"
#include "META_Cinematic.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_Cinematic : public UMETA_BaseMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BaseMissionSave m_CinematicMissionSave;
    
public:
    UMETA_Cinematic();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CinematicMissionRowInfo GetInfo() const;
    
};

