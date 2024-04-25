#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_HubGroupTileSetup.h"
#include "IGS_PresetData.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_PresetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_HubGroupTileSetup> Tiles;
    
    UIGS_PresetData();

};

