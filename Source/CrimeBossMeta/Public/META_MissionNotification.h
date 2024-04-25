#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_MissionNotification.generated.h"

class UMETA_BaseMission;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_MissionNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BaseMission* m_Mission;
    
public:
    UMETA_MissionNotification();

    UFUNCTION(BlueprintCallable)
    void SetMission(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_BaseMission* GetMission() const;
    
};

