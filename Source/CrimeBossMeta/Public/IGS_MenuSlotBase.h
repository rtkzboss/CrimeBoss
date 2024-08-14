#pragma once
#include "CoreMinimal.h"
#include "EIGS_StorePlatform.h"
#include "CommonHeisterData.h"
#include "GameFramework/Actor.h"
#include "EIGS_MenuSlotOccupation.h"
#include "IGS_MenuSlotBase.generated.h"

class AIGS_PlayerStateGame;
class APlayerState;

UCLASS(Abstract, Blueprintable)
class CRIMEBOSSMETA_API AIGS_MenuSlotBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_MenuSlotBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePlayerHeisterData(APlayerState* inPlayerState, const FCommonHeisterData& inHeisterData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsConfirmed(bool& IsConfirmed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EIGS_StorePlatform GetStorePlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetPlayerState(AIGS_PlayerStateGame*& PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetOccupation(EIGS_MenuSlotOccupation& Occupation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetHeisterData(FCommonHeisterData& HeisterData);
    
};

