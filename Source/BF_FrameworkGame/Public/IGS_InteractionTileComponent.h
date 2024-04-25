#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_OnTileCompSuccessDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_InteractionTileComponent.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_InteractionSubTileActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractionTileComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnTileCompSuccess OnTileSuccessEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnTileCompSuccess OnTileActivatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AIGS_InteractionSubTileActor* SubTileChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_InteractionSubTileActor> SubTileActorClass;
    
    UIGS_InteractionTileComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void OnSubTileSuccess(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubTileActorSpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnSubTileActivate(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable)
    void DestroyTileActor();
    
};

