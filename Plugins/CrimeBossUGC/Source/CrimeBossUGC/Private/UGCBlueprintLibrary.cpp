#include "UGCBlueprintLibrary.h"
#include "Kismet/Gameplaystatics.h"
#include "IGS_UGCBaseGameInstance.h"

UUGCBlueprintLibrary::UUGCBlueprintLibrary() {
}

UUGCRegistry* UUGCBlueprintLibrary::GetUGCRegistry(UObject* WorldContextObject) {
    auto GameInstance = Cast<UIGS_UGCBaseGameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
    return GameInstance ? GameInstance->UGCRegistry : nullptr;
}


