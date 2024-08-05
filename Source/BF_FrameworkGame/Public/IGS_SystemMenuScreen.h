#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "IGS_SystemMenuScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_SystemMenuScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClosingInProcess;
    
    UIGS_SystemMenuScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSystemMenuScreen();
    
};

