#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "IGSScrollBox.generated.h"

UCLASS(Blueprintable)
class BF_GUI_API UIGSScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
public:
    UIGSScrollBox();

    UFUNCTION(BlueprintCallable)
    void ScrollPageUp();
    
    UFUNCTION(BlueprintCallable)
    void ScrollPageDown();
    
    UFUNCTION(BlueprintCallable)
    void ScrollBy(float Delta);
    
};

