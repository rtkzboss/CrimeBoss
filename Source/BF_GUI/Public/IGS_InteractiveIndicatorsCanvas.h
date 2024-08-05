#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_InteractiveIndicatorsCanvas.generated.h"

class UCanvasPanel;
class UIGS_InteractionIndicatorSingleWidget;
class UIGS_InteractiveComponent;
class UIGS_InteractiveObjectsManager;
class UIGS_UseComponent;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_InteractiveIndicatorsCanvas : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InteractionIndicatorSingleWidget> WidgetIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* IconCanvas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveObjectsManager* m_InteractiveObjectsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> m_InteractionsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractionIndicatorSingleWidget*> m_SpawnedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_UseComponent> m_OwningUseComponent;
    
public:
    UIGS_InteractiveIndicatorsCanvas();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetWidgetXY(FVector InLocation, FVector2D& outXY, float& outAngle);
    
};

