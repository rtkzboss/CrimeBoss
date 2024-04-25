#pragma once
#include "CoreMinimal.h"
#include "CommonTileView.h"
#include "Templates/SubclassOf.h"
#include "IGS_MenuTileView.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_MenuTileView : public UCommonTileView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ItemWidgetTemplate;
    
    UIGS_MenuTileView();

};

