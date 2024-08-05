#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_LevelPlayerSpawnManager.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_LevelPlayerSpawnManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSpawnEnabled;
    
    UIGS_LevelPlayerSpawnManager();

};

