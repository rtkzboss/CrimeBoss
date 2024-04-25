#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "IGS_ThrowableData.h"
#include "IGS_ThrowableBase.generated.h"

class UIGS_SkinHandlerBase;
class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ThrowableBase : public AIGS_WieldableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_ThrowableInventoryObject> ThrowableInventoryObject;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_ThrowableData ThrowableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SkinHandlerBase* SkinHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LoadedProjectileClass;
    
public:
    AIGS_ThrowableBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnThrowStart(bool inLow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnThrowFinish(bool inLow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnThrowCancel(bool inLow);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugSettingsChanged();
    
};

