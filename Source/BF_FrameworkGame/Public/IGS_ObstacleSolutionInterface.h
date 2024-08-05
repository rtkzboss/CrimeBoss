#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_ObstacleSolutionInterface.generated.h"

class AActor;
class AIGS_RoomBase;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_ObstacleSolutionInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_ObstacleSolutionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUniqueID(int32 inUniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOwningRoom(AIGS_RoomBase* inRoom);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetKeycode(int32 inCode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActorToUnlock(AActor* inQuerrier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObstacleUnlock(AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObstacleLock(AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetUniqueID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AIGS_RoomBase* GetOwningRoom();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetKeycode();
    
};

