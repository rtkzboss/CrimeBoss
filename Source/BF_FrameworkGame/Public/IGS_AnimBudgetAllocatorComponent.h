#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_Mesh_BudgetAllocator_Settings.h"
#include "IGS_AnimBudgetAllocatorComponent.generated.h"

class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimBudgetAllocatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceUpdateInterval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponentBudgeted*, FIGS_Mesh_BudgetAllocator_Settings> m_ChildMeshesDefaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponentBudgeted*, FIGS_Mesh_BudgetAllocator_Settings> m_ChildMeshesOptimizedSettings;
    
public:
    UIGS_AnimBudgetAllocatorComponent(const FObjectInitializer& ObjectInitializer);

};

