#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_MetaCutsceneDataDelegateDelegate.h"
#include "IGS_LoadCutsceneMetaData.generated.h"

class UIGS_LoadCutsceneMetaData;
class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_LoadCutsceneMetaData : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneDataDelegate Loaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneDataDelegate Failed;
    
    UIGS_LoadCutsceneMetaData();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCutsceneDatabaseLoaded(FName inCutsceneID);
    
    UFUNCTION(BlueprintCallable)
    void OnAssetLoaded(FSoftObjectPath inAssetPath);
    
public:
    UFUNCTION(BlueprintCallable)
    static UIGS_LoadCutsceneMetaData* LoadCutsceneMetaData(UObject* inWCO, FText inCutsceneID);
    
};

