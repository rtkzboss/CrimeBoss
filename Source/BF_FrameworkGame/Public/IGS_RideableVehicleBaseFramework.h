#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "IGS_RideableVehicleBaseFramework.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_RideableVehicleBaseFramework : public APawn {
    GENERATED_BODY()
public:
    AIGS_RideableVehicleBaseFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeatIndexForPawn(AIGS_GameCharacterFramework* inCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalSeatIndex() const;
    
};

