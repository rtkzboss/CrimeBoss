#pragma once
#include "CoreMinimal.h"
#include "IGS_NotificationManagerBaseComponent.h"
#include "IGS_Quickplay_NotificationManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_NotificationManagerComponent : public UIGS_NotificationManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_NotificationManagerComponent(const FObjectInitializer& ObjectInitializer);

};

