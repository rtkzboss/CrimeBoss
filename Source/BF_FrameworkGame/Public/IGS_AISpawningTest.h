#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "EIGS_SpawnAnimType.h"
#include "IGS_AISpawningTest.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AISpawningTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SpawnAnimType SpawnAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnPeriod;
    
    AIGS_AISpawningTest(const FObjectInitializer& ObjectInitializer);

};

