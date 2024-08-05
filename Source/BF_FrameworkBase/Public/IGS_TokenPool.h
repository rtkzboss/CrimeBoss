#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_TokenPool.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_ActionToken;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_TokenPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIGS_ActionToken*> UsedTokens;
    
public:
    UIGS_TokenPool();

    UFUNCTION(BlueprintCallable)
    UIGS_ActionToken* TryToStealToken(AIGS_GameCharacterFramework* Instigator, int32 Priority, int32 BoostPriority, float BoostDuration);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToken(UIGS_ActionToken* Token);
    
    UFUNCTION(BlueprintCallable)
    bool IsTokenAvailable();
    
    UFUNCTION(BlueprintCallable)
    UIGS_ActionToken* AcquireToken(AIGS_GameCharacterFramework* Instigator, int32 Priority, int32 BoostPriority, float BoostDuration);
    
};

