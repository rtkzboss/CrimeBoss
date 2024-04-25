#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuBackgroundMusicStatesDataAsset.generated.h"

class UAkStateValue;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_MenuBackgroundMusicStatesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAkStateValue*> AkEvents;
    
    UIGS_MenuBackgroundMusicStatesDataAsset();

};

