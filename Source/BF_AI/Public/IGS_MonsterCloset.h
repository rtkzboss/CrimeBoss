#pragma once
#include "CoreMinimal.h"
#include "IGS_AITransitionObjectBase.h"
#include "UObject/NoExportTypes.h"
#include "IGS_MonsterCloset.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_ScriptPoint;
class UBoxComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_MonsterCloset : public AIGS_AITransitionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AIEnemyGroupSpawner*> AIEnemyGroupSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_ScriptPoint*> CharacterRemovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* helpersBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToPlayableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPlayableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ApproxPlayableAreaEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckValidityInRuntime;
    
public:
    AIGS_MonsterCloset(const FObjectInitializer& ObjectInitializer);

};

