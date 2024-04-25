#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_GameTimeManager.generated.h"

class UIGS_TimeLineHolder;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GameTimeManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_TimeLineHolder*> m_Timelines;
    
public:
    UIGS_GameTimeManager();

};

