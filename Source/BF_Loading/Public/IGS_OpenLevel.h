#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_LevelTransitionSimpleSignatureDelegate.h"
#include "IGS_OpenLevel.generated.h"

class UIGS_OpenLevel;
class UObject;

UCLASS(Blueprintable)
class BF_LOADING_API UIGS_OpenLevel : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSimpleSignature LevelLoadAttemptSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSimpleSignature LevelLoadAttemptFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSimpleSignature LevelLoadStarted;
    
    UIGS_OpenLevel();

    UFUNCTION(BlueprintCallable)
    static UIGS_OpenLevel* OpenLevel(UObject* inWCO, FName inLevelName, bool inAbsolute, const FString& inOptions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadStarted(FName inLevelName, bool inIsServerTravel);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadAttemptSuccess(FName inLevelName, bool inIsServerTravel);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadAttemptFailure(FName inLevelName, bool inIsServerTravel);
    
};

