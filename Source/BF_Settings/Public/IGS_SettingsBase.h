#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_SettingsChangedEventDelegate.h"
#include "IGS_SettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, Config=GameUserSettings)
class BF_SETTINGS_API UIGS_SettingsBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SettingsChangedEvent OnSettingsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSettingsValid;
    
public:
    UIGS_SettingsBase();

};

