#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_LevelTransitionSimpleSignatureDelegate.h"
#include "IGS_ServerTravel.generated.h"

class UIGS_ServerTravel;
class UObject;

UCLASS(Blueprintable)
class BF_LOADING_API UIGS_ServerTravel : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSimpleSignature LevelLoadAttemptSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSimpleSignature LevelLoadAttemptFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSimpleSignature LevelLoadStarted;
    
    UIGS_ServerTravel();

    UFUNCTION(BlueprintCallable)
    static UIGS_ServerTravel* ServerTravel(UObject* inWCO, FName inLevelName, const FString& inOptions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadStarted(FName inLevelName, bool inIsServerTravel);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadAttemptSuccess(FName inLevelName, bool inIsServerTravel);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadAttemptFailure(FName inLevelName, bool inIsServerTravel);
    
};

