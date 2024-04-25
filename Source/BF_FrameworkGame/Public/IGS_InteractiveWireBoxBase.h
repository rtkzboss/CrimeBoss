#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_InteractiveWireBoxBase.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_InteractiveWireBoxBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> WireInteractiveMeshes;
    
public:
    AIGS_InteractiveWireBoxBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWireCut(int32 inWireIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitProperties();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_RemoveWire(int32 inWireIndex);
    
};

