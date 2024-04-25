#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterSquadBotInfo.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadHeisters.generated.h"

class AIGS_RoomBase;
class UIGS_SquadHeistersEventWatchComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadHeisters : public AIGS_SquadBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_RoomBase* LastAreaOfOperationsRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextSpreadUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_HeisterSquadBotInfo> BotsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> EmptyRoomArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SquadHeistersEventWatchComponent* SquadHeistersEventWatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> m_PossibleAreaOfOperations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> m_AreaOfOperations;
    
public:
    AIGS_SquadHeisters(const FObjectInitializer& ObjectInitializer);

};

