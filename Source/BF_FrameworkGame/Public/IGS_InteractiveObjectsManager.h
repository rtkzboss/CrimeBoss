#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_InteractiveObjectsManager.generated.h"

class UIGS_InteractiveComponent;
class UIGS_InteractiveObjectsManager;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_InteractiveObjectsManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> InteractiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyReset;
    
    UIGS_InteractiveObjectsManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterInteractiveComponent(UIGS_InteractiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInteractiveComponent(UIGS_InteractiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_InteractiveObjectsManager* Instance(const UObject* inWorldContextObject);
    
};

