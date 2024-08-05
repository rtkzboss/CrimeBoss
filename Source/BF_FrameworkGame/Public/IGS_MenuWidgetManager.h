#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuWidgetManager.generated.h"

class UIGS_MenuScreenWidget;
class UIGS_MenuWidgetManager;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_MenuWidgetManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_MenuScreenWidget*> MenuWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyReset;
    
    UIGS_MenuWidgetManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterWidget(UIGS_MenuScreenWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWidget(UIGS_MenuScreenWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_MenuWidgetManager* Instance(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UIGS_MenuScreenWidget* GetWidgetByTag(FGameplayTag inTag);
    
};

