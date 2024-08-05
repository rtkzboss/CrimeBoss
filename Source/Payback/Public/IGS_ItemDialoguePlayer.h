#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_ItemDialoguePlayer.generated.h"

class UAkComponent;
class UAkSwitchValue;
class UIGS_NetworkComponentDialogue;

UCLASS(Abstract, Blueprintable)
class PAYBACK_API AIGS_ItemDialoguePlayer : public AActor, public IIGS_DialogueInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueGroupCharacterHolder DialogueCharacterHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFPP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NetworkComponentDialogue* NetworkDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FPPAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AIGS_ItemDialoguePlayer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

