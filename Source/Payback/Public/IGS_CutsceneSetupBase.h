#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_DialogueCameraOverride.h"
#include "IGS_CutsceneSetupBase.generated.h"

class ALevelSequenceActor;

UCLASS(Abstract, Blueprintable)
class PAYBACK_API AIGS_CutsceneSetupBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIGS_DialogueCameraOverride> DialoguesCameraOverdrive;
    
    AIGS_CutsceneSetupBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshProperties();
    
    UFUNCTION(BlueprintCallable)
    void InitializedSequencePlayer(ALevelSequenceActor* inLevelSequenceActor);
    
};

