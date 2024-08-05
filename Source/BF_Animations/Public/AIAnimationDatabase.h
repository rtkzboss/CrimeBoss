#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeathAnimations.h"
#include "AIAnimationDatabase.generated.h"

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UAIAnimationDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathAnimations DeathAnimations;
    
    UAIAnimationDatabase();

};

