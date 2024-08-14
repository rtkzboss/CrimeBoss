#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_UGCModBase.generated.h"

class UActorComponent;
class UWorld;

UCLASS(Abstract, Blueprintable)
class CRIMEBOSSUGC_API UIGS_UGCModBase : public UObject {
    GENERATED_BODY()
public:
    class UIGS_UGCBaseGameInstance* GameInstance;
    virtual class UWorld* GetWorld() const;

public:
    UIGS_UGCModBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StarterMapInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuickPlayStashInitialized(UActorComponent* inQuickplayStashManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MetaStashInitialized(UActorComponent* inMetaplayStashManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetGameWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GameInstanceInitialized();

};

