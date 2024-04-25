#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "IGS_EnvQueryItemType_LootCollection.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_EnvQueryItemType_LootCollection : public UEnvQueryItemType_Actor {
    GENERATED_BODY()
public:
    UIGS_EnvQueryItemType_LootCollection();

};

