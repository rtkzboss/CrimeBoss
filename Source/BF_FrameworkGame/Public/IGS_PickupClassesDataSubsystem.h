#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_PickupClassesDataSubsystem.generated.h"

class UIGS_PickupClassesData;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_PickupClassesDataSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PickupClassesData* PickupClasses;
    
public:
    UIGS_PickupClassesDataSubsystem();

};

