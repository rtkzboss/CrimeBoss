#include "PropGroupCode.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

APropGroupCode::APropGroupCode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}


