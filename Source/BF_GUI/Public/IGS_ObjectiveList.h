#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_ObjectiveList.generated.h"

class UIGS_ObjectiveWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_ObjectiveList : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ObjectiveBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ObjectiveWidget> ObjectiveWidgetClass;
    
    UIGS_ObjectiveList();

    UFUNCTION(BlueprintCallable)
    void InitializeObjective();
    
};

