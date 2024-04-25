#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EIGS_AlarmDeviceType.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryGenerator_AlarmDevices.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_AlarmDevices : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Querier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EIGS_AlarmDeviceType> PreferredAlarmDeviceTypes;
    
public:
    UIGS_EnvQueryGenerator_AlarmDevices();

};

