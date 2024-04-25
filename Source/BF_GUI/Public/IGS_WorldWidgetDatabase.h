#pragma once
#include "CoreMinimal.h"
#include "EIGS_WorldWidgetType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_WorldWidgetData.h"
#include "Templates/SubclassOf.h"
#include "IGS_WorldWidgetDatabase.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_WorldWidgetDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_WorldWidgetDatabase();

    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UUserWidget> GetWorldWidgetIcon(UObject* inWCO, EIGS_WorldWidgetType inWorldWidgetType);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_WorldWidgetData GetWidgetIconData(UObject* inWCO, EIGS_WorldWidgetType inWorldWidgetType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetProgressVisibilityForWidgetType(UObject* inWCO, EIGS_WorldWidgetType inWorldWidgetType);
    
    UFUNCTION(BlueprintCallable)
    FIGS_WorldWidgetData GetDataFromWieldableClass(EIGS_WorldWidgetType inID);
    
};

