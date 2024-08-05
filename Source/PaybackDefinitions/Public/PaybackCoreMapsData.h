#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PaybackCoreMapsData.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UPaybackCoreMapsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainMenuMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MetaGameMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GamePreparationLobbyMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameEndLobbyMapName;
    
    UPaybackCoreMapsData();

};

