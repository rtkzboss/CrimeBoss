#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_AmmoBoxData.h"
#include "Templates/SubclassOf.h"
#include "IGS_AmmoBoxDataAsset.generated.h"

class UIGS_AmmoInventoryObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AmmoBoxDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_AmmoInventoryObject>, FIGS_AmmoBoxData> AmmoData;
    
    UIGS_AmmoBoxDataAsset();

};

