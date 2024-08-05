#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_TileManagerDatabaseRow.h"
#include "IGS_TileManagerDatabaseAsset.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_TileManagerDatabaseAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FIGS_TileManagerDatabaseRow> TileData;
    
    UIGS_TileManagerDatabaseAsset();

    UFUNCTION(BlueprintCallable)
    bool HasTileData(const FString& inTileName);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdate(const FString& inTileName, FIGS_TileManagerDatabaseRow inTileData);
    
};

