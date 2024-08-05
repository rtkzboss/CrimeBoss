#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EIGS_AICommandState.h"
#include "EIGS_AICommandType.h"
#include "IGS_AICommandFinishedDelegateDelegate.h"
#include "IGS_AICommand.generated.h"

class AIGS_AIControllerGame;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommand : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AICommandState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AICommandType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_AIControllerGame> OwningController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AICommandFinishedDelegate OnAICommandFinished;
    
    UIGS_AICommand();

    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    void Fail();
    
};

