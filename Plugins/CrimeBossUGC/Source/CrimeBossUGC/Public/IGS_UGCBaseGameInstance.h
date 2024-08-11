#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "IGS_UGCBaseGameInstance.generated.h"

class UIGS_UGCModBase;
class UUGCRegistry;

UCLASS(Blueprintable, NonTransient)
class CRIMEBOSSUGC_API UIGS_UGCBaseGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    virtual void Init() override;
    void OnStarterMapInitialized();
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUGCRegistry* UGCRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_UGCModBase*> UGCModObjects;
    
    UIGS_UGCBaseGameInstance();

    UFUNCTION(BlueprintCallable)
    void OnQuickPlayStashInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnMetaPlayStashInitialized();
};

