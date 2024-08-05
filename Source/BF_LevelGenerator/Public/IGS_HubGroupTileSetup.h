#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubScenarioFlag.h"
#include "IGS_SingleTileSetup.h"
#include "IGS_HubGroupTileSetup.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HubGroupTileSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SingleTileSetup Tile0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SingleTileSetup Tile1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SingleTileSetup Tile2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SingleTileSetup Tile3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HubScenarioFlag TileFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayableArea;
    
    BF_LEVELGENERATOR_API FIGS_HubGroupTileSetup();
};

