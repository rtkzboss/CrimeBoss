#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_GlobalDialoguePlayer.generated.h"

class UAkComponent;
class UIGS_NetworkComponentDialogue;

UCLASS(Blueprintable)
class PAYBACK_API AIGS_GlobalDialoguePlayer : public AActor, public IIGS_DialogueInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NetworkComponentDialogue* NetworkDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    AIGS_GlobalDialoguePlayer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

