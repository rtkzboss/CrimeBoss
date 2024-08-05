#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_InCoverBleeding.generated.h"

class AIGS_AIControllerBase;
class AIGS_IntelligentGameCharacter;
class UCoverPoint;
class UIGS_CharacterData;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_InCoverBleeding : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCoverPoint* m_CoverPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_AIControllerBase* m_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* m_Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CharacterData* m_CharacterData;
    
public:
    UBTTask_InCoverBleeding();

};

