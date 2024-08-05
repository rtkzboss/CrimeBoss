#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_DefendManager.generated.h"

class AIGS_WaypointFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_DefendManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointFramework*> m_DefendPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointFramework*> m_DefendPointsInitial;
    
public:
    UIGS_DefendManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterDefendPointInitial(AIGS_WaypointFramework* inDefendPoint);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterDefendPoint(AIGS_WaypointFramework* inDefendPoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDefendPointInitial(AIGS_WaypointFramework* inDefendPoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDefendPoint(AIGS_WaypointFramework* inDefendPoint);
    
};

