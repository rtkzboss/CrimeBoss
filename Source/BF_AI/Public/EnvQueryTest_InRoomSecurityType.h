#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EIGS_RoomSecurityType.h"
#include "EnvQueryTest_InRoomSecurityType.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UEnvQueryTest_InRoomSecurityType : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_RoomSecurityType> DesiredSecurityTypes;
    
    UEnvQueryTest_InRoomSecurityType();

};

