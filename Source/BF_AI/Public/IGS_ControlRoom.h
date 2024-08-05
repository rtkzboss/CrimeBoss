#pragma once
#include "CoreMinimal.h"
#include "IGS_ControlRoomBase.h"
#include "IGS_ControlRoom.generated.h"

class AIGS_SquadGuard;
class UIGS_AIDirector;
class UIGS_GuardControlRoomComponent;
class UIGS_SuspicionManager;

UCLASS(Blueprintable)
class BF_AI_API AIGS_ControlRoom : public AIGS_ControlRoomBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DEBUG_DisableRadio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DEBUG_DisableAlarmButtonReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_SquadGuard> GuardSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_GuardControlRoomComponent> GuardSquadControlRoomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_AIDirector> AIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;
    
public:
    AIGS_ControlRoom(const FObjectInitializer& ObjectInitializer);

};

