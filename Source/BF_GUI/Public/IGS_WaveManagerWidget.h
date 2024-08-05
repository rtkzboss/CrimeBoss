#pragma once
#include "CoreMinimal.h"
#include "EIGS_PressurePhase.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_WaveManagerWidget.generated.h"

class UIGS_WaveManager;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WaveManagerWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_WaveManager> WaveManager;
    
public:
    UIGS_WaveManagerWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PhaseChanged(EIGS_PressurePhase inPressurePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnemyCountChanged();
    
};

