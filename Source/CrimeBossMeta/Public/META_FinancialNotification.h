#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_FinancialNotification.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_FinancialNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Money;
    
public:
    UMETA_FinancialNotification();

    UFUNCTION(BlueprintCallable)
    void SetMoney(int32 inMoney, bool inShowAbsolute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoney() const;
    
};

