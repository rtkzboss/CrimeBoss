#pragma once
#include "CoreMinimal.h"
#include "IGS_ContractManagerBaseComponent.h"
#include "IGS_Quickplay_ContractManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_ContractManagerComponent : public UIGS_ContractManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_ContractManagerComponent(const FObjectInitializer& ObjectInitializer);

};

