#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointBase.h"
#include "IGS_PatrolGroup.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class AIGS_PatrolPoint;
class AIGS_WaypointFramework;
class UIGS_AICommand;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_PatrolGroup : public AIGS_WaypointBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_PatrolPoint*> PatrolPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointFramework*> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointBase*> WaypointsCasted;
    
    AIGS_PatrolGroup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWaitFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AIGS_WaypointBase* GetPatrolPoint(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllVisitablePoints(AIGS_GameCharacterFramework* inCharacter) const;
    
};

