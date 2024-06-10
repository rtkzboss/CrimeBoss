#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_RoomSecurityType.h"
#include "EIGS_RoomType.h"
#include "EIGS_SecurityTier.h"
#include "IGS_RoomTestStruct.h"
#include "IGS_RoomHelpers.generated.h"

class AActor;
class AIGS_DoorBase;
class AIGS_DoorsBreachPoints;
class AIGS_GameCharacterFramework;
class AIGS_RoomBase;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_RoomHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_RoomHelpers();

    UFUNCTION(BlueprintCallable)
    static void UpdateCharacterCurrentRoom(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static FVector ShowRoomWithIndex(TArray<FIGS_RoomTestStruct> GroupOfRooms, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentSecurityLocationToCharacter(AIGS_GameCharacterFramework* inCharacter, AIGS_RoomBase* inCurrRoom);
    
    UFUNCTION(BlueprintCallable)
    static bool InSameArea(AIGS_RoomBase* room1, AIGS_RoomBase* room2, int32 Depth);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static void HighlightBadPolys(const UObject* inWorldContextObject, UPARAM(Ref) TArray<FIGS_RoomTestStruct>& inGroupsWithoutRoom, UPARAM(Ref) TArray<FIGS_RoomTestStruct>& inGroupsWithMultipleRooms);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetTransitionPointsFromRoom(AIGS_RoomBase* Room);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetTransitionPointsBetweenRooms(AIGS_RoomBase* inLeftRoom, AIGS_RoomBase* inRightRoom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EIGS_RoomType> GetRoomTypesFromBitflagInt(int32 inBitFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static int32 GetRoomIndex(const UObject* inWorldContextObject, AIGS_RoomBase* inRoom);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static int32 GetRoomCount(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static AIGS_RoomBase* GetRoomByLocation(const UObject* inWorldContextObject, FVector inInLocation, FVector inExtent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static AIGS_RoomBase* GetRoomByIndex(const UObject* inWorldContextObject, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetLockNameFromRoom(AIGS_RoomBase* inRoom);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsLocationFrontFacing(AActor* inActor, FVector inQueryLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIntFromRoomTypes(TArray<EIGS_RoomType> inRoomTypes);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_DoorsBreachPoints* GetBreachingPoints(FVector inQueryLocation, AIGS_DoorBase* inDoor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static void GetBadRoomsOffline(const UObject* inWorldContextObject, TArray<FIGS_RoomTestStruct>& inGroupsWithoutRoom, TArray<FIGS_RoomTestStruct>& inGroupsWithMultipleRooms);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static void GetBadRooms(const UObject* inWorldContextObject, TArray<FIGS_RoomTestStruct>& nodesWithoutRoom, TArray<FIGS_RoomTestStruct>& nodesWithMultipleRooms);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static TArray<AIGS_RoomBase*> FindRoom(const UObject* inWorldContextObject, EIGS_RoomSecurityType inSecurity, EIGS_RoomType inType, EIGS_SecurityTier inOuterTier);
    
    UFUNCTION(BlueprintCallable)
    static FVector FindCenterPolygonOfRoom(const TArray<FVector>& Room);
    
    UFUNCTION(BlueprintCallable)
    static void DebugHighlightRoomPolys(AIGS_RoomBase* inRoom);
    
};

