#pragma once
#include "CoreMinimal.h"
#include "IGS_CommonItemData.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WalkieTalkie.generated.h"

class UAkAudioEvent;
class UIGS_GlobalInventoryObject;
class UIGS_InteractiveComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_WalkieTalkie : public AIGS_PickupActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_GlobalInventoryObject> WalkieClassToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WalkieTalkieCheckInSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WalkieTalkiePickupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PickupDialogID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CommonItemData CommonData;
    
public:
    AIGS_WalkieTalkie(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWalkiePicked();
    
};

