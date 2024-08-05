#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_FPSDifficulty.generated.h"

class UIGS_FPSDifficultyDataAsset;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_FPSDifficulty : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_FPSDifficultyDataAsset* m_FPSDifficultyDA;
    
public:
    UIGS_FPSDifficulty();

};

