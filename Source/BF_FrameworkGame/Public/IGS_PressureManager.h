#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PressureRecord.h"
#include "IGS_PressureManager.generated.h"

class UIGS_PressureManagerData;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_PressureManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PressureManagerData* m_PressureManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPressureRecord> m_Records;
    
public:
    UIGS_PressureManager();

};

