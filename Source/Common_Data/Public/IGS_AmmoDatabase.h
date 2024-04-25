#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_AmmoDatabase.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_AmmoDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_AmmoDatabase();

};

