#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "IGS_WaypointManager.generated.h"

class AIGS_SmartObjectSimpleBase;
class AIGS_WaypointBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_WaypointManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointBase*> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_SmartObjectSimpleBase*> SimpleSmartObjects;
    
public:
    UIGS_WaypointManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsOfClassInBoxWithTransform(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass, const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsOfClassInBox(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass, FVector inOrigin, FVector InBoxExtent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsOfClass(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsInBox(FVector inOrigin, FVector InBoxExtent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_SmartObjectSimpleBase*> GetAllSimpleSmartObjectsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;
    
};

