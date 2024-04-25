#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "IGS_AISpawnPointData.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AISpawnPointData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UStaticMesh>> TestMeshesTags;
    
    UIGS_AISpawnPointData();

};

