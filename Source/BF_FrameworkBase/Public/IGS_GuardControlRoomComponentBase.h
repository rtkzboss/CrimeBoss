#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_GuardControlRoomComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_GuardControlRoomComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_GuardControlRoomComponentBase(const FObjectInitializer& ObjectInitializer);

};

