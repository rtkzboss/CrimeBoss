#pragma once
#include "CoreMinimal.h"
#include "META_GameModeAdapter.h"
#include "GameFramework/GameModeBase.h"
#include "META_ManagersExplorer.h"
#include "IGS_GameModeMenuBase.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class CRIMEBOSSMETA_API AIGS_GameModeMenuBase : public AGameModeBase, public IMETA_ManagersExplorer, public IMETA_GameModeAdapter {
    GENERATED_BODY()
public:
    AIGS_GameModeMenuBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

