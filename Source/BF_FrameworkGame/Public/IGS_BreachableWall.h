#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_DoorBreachInterface.h"
#include "IGS_BreachableWall.generated.h"

class AIGS_RoomBase;
class UBoxComponent;
class UChildActorComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_BreachableWall : public AActor, public IIGS_DoorBreachInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WallRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FrontBreachingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* BackBreachingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_RoomBase* OwningRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBreached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NavigationBlock;
    
    AIGS_BreachableWall(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

