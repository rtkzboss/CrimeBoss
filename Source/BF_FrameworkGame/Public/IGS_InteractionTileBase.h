#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "IGS_OnTileSuccessDelegate.h"
#include "IGS_InteractionTileBase.generated.h"

class AIGS_InteractionSubTileActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractionTileBase : public UChildActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnTileSuccess OnTileSuccessEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnTileSuccess OnTileActivatedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_InteractionSubTileActor* m_SubTileActor;
    
public:
    UIGS_InteractionTileBase(const FObjectInitializer& ObjectInitializer);

};

