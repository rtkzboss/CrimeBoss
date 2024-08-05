#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_SpawnDefHolder.generated.h"

class AIGS_AIEnemyGroupSpawner;

USTRUCT(BlueprintType)
struct FIGS_SpawnDefHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIGS_AIEnemyGroupSpawner>> SpawnGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefendTags;
    
    BF_FRAMEWORKGAME_API FIGS_SpawnDefHolder();
};

