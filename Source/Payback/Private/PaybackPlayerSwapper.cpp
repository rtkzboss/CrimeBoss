#include "PaybackPlayerSwapper.h"
#include "ComponentInstanceDataCache.h"

UPaybackPlayerSwapper::UPaybackPlayerSwapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UPaybackPlayerSwapper::GetNextViableBotNumber(UObject* inWCO, int32 inCurrentHeisterNumber, bool& outSuccess) {
    return 0;
}

AController* UPaybackPlayerSwapper::GetAliveBotByNumber(int32 inNumber, bool& outSuccess) {
    return NULL;
}

void UPaybackPlayerSwapper::ForceSwapToPawn(AController* InPlayerController, APawn* inPawnToSwapTo) {
}


