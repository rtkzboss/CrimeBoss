#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_SubwidgetHolder.generated.h"

class UIGS_HUDSubwidgetBase;

USTRUCT(BlueprintType)
struct FIGS_SubwidgetHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_HUDSubwidgetBase> SubwidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_HUDSubwidgetBase* SubwidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubwidgetName;
    
    BF_GUI_API FIGS_SubwidgetHolder();
};

