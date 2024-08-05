#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_PingablePair.h"
#include "IGS_PingableManager.generated.h"

class UIGS_PingableManager;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_PingableManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_PingablePair> Pingables;
    
public:
    UIGS_PingableManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_PingableManager* Instance(const UObject* inWorldContextObject);
    
};

