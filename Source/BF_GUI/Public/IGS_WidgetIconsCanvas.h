#pragma once
#include "CoreMinimal.h"
#include "EIGS_WorldWidgetType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetIconsCanvas.generated.h"

class UCanvasPanel;
class UIGS_WorldSpaceUserWidget;
class UIGS_WorldSpaceWidgetManager;
class UIGS_WorldWidgetDatabase;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetIconsCanvas : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WorldSpaceUserWidget> WidgetIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EdgeMarginX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EdgeMarginY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* IconCanvas;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerCameraRotationFwdVector;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WorldSpaceWidgetManager* m_WorldWidgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_WorldSpaceUserWidget*> m_SpawnedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WorldWidgetDatabase* m_WidgetIconDatabase;
    
public:
    UIGS_WidgetIconsCanvas();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetPosition(UIGS_WorldSpaceUserWidget* InWidget, FVector2D InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetWidgetXY(FVector InLocation, FVector2D& outXY, bool bOuterEdge, float& outAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetShowOnlyOffScreen(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetHasWidgetTypeOuterEdgeOverride(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetHasWidgetTypeEdgeOverride(EIGS_WorldWidgetType inType);
    
};

