#pragma once
#include "CoreMinimal.h"
#include "IGS_AggroHolder.h"
#include "IGS_SenseHolder.h"
#include "IGS_EnemyHolder.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIGS_EnemyHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SenseHolder SenseHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AggroHolder AggroHolder;
    
    BF_AI_API FIGS_EnemyHolder();
};

