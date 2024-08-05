#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_MetaCutsceneLoadPaperDollDelegateDelegate.h"
#include "IGS_LoadMetaCutscenePaperDolls.generated.h"

class UIGS_LoadMetaCutscenePaperDolls;
class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_LoadMetaCutscenePaperDolls : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneLoadPaperDollDelegate Loaded;
    
    UIGS_LoadMetaCutscenePaperDolls();

    UFUNCTION(BlueprintCallable)
    static UIGS_LoadMetaCutscenePaperDolls* LoadMetaCutscenePaperDolls(UObject* inWCO);
    
};

