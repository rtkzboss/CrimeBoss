#pragma once
#include "CoreMinimal.h"
#include "IGS_GuardControlRoomComponentBase.h"
#include "IGS_GuardControlRoomComponent.generated.h"

class AIGS_ControlRoom;
class AIGS_SquadBase;
class UEnvQuery;
class UIGS_AIDirector;
class UIGS_SuspicionManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_GuardControlRoomComponent : public UIGS_GuardControlRoomComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* CloseGuardEQS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* AnyGuardEQS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_SquadBase> OwningSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_ControlRoom> ConnectedControlRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_AIDirector> AIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;
    
public:
    UIGS_GuardControlRoomComponent(const FObjectInitializer& ObjectInitializer);

};

