#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableBase.h"
#include "IGS_SoapCarry.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SoapCarry : public AIGS_CarryableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSlipEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToSlipOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRangeForTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCanThrow;
    
    AIGS_SoapCarry(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SlippingOff();
    
};

