#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadGuardians.h"
#include "IGS_SquadGuard.generated.h"

class UIGS_GuardControlRoomComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadGuard : public AIGS_SquadGuardians {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GuardControlRoomComponent* GuardControlRoomComponent;
    
public:
    AIGS_SquadGuard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_GuardControlRoomComponent* GetGuardControlRoomComponent() const;
    
};

