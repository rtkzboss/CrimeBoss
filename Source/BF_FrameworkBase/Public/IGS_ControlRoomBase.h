#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_ControlRoomBase.generated.h"

class UIGS_GuardControlRoomComponentBase;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_ControlRoomBase : public AVolume {
    GENERATED_BODY()
public:
    AIGS_ControlRoomBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_GuardControlRoomComponentBase* GetGuardSquadControlRoomComponent() const;
    
};

