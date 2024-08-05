#pragma once
#include "CoreMinimal.h"
#include "IGS_GameInstanceFramework.h"
#include "IGS_LoginChangedAfterEASSignatureDelegate.h"
#include "PaybackGameInstance.generated.h"

class UPaybackCoreMapsData;

UCLASS(Blueprintable, NonTransient)
class PAYBACK_API UPaybackGameInstance : public UIGS_GameInstanceFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LoginChangedAfterEASSignature OnLoginChangedAfterEAS;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaybackCoreMapsData* CoreMapsData;
    
public:
    UPaybackGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TriggerOnLoginChangedAfterEAS() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUseEAS(bool inUseEAS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUseEAS(bool& outUseEAS);
    
};

