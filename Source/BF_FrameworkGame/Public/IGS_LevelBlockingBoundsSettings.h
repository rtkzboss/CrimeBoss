#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "Templates/SubclassOf.h"
#include "IGS_LevelBlockingBoundsSettings.generated.h"

class UNavArea;
class UUserWidget;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_LevelBlockingBoundsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> NoHeisterAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> OutOfBoundsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UIGS_LevelBlockingBoundsSettings();

};

