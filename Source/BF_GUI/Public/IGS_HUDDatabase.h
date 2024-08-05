#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_HUDData.h"
#include "IGS_HUDDatabase.generated.h"

class AIGS_WieldableBase;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_HUDDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_HUDDatabase();

    UFUNCTION(BlueprintCallable)
    FIGS_HUDData GetDataFromWieldableClass(TSoftClassPtr<AIGS_WieldableBase> inClass);
    
};

