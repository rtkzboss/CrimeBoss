#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaAdditionalButtonType.h"
#include "IGS_ScreenSwitchManagerBaseComponent.h"
#include "IGS_ScreenSwitchManager.generated.h"

class IMETA_GameModeAdapter;
class UMETA_GameModeAdapter;
class UIGS_ScreenSwitchManager;
class UMETA_UIEventsManagerComponent;
class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ScreenSwitchManager : public UIGS_ScreenSwitchManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_UIEventsManagerComponent* UIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_GameModeAdapter> AdapterInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentTag;
    
    UIGS_ScreenSwitchManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void TriggerAdditionalAction(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonType(EIGS_MetaAdditionalButtonType inType);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSwitchToScreen(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_ScreenSwitchManager* Instance(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void GoBack(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void Confirm(UObject* inWCO);
    
};

