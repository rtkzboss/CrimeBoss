#pragma once
#include "CoreMinimal.h"
#include "IGS_HasObjectStatusInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_ShieldBase.generated.h"

class UIGS_BreakableWindowComponent;
class UIGS_ObjectStatus;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ShieldBase : public AActor, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShieldMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreakableWindowComponent* OptionalBreakableWindowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* OptionalBreakableWindowObjectStatusComponent;
    
    AIGS_ShieldBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetachedEvent();
    

    // Fix for true pure virtual functions not being implemented
};

