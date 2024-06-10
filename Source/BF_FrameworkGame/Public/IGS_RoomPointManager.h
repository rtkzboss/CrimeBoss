#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_RoomData.h"
#include "IGS_RoomPolysGeneratedDelegateDelegate.h"
#include "IGS_RoomPointManager.generated.h"

class AIGS_HumanNavMesh;
class AIGS_RoomBase;
class ARoomNavmesh;
class UIGS_RoomPointManager;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_RoomPointManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> Rooms;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_RoomPolysGeneratedDelegate OnRoomPolysGeneratedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoomPolysGathered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FIGS_RoomData> RoomsData;
    
    UIGS_RoomPointManager();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RefreshBadRooms(const bool inHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_RoomPointManager* Instance(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void InitializeRooms();
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_RoomBase*> GetRoomsWithGameplayTag(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARoomNavmesh* GetRoomNavData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_HumanNavMesh* GetHumanNavData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_RoomBase*> GetAllRoomsInBox(FVector inOrigin, FVector InBoxExtent) const;
    
};

