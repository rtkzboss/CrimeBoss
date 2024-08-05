#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_WoundType.h"
#include "IGS_ImpactParameters.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactManager.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_ImpactManager;
class UIGS_ImpactManagerSettings;
class UIGS_ImpactTypeObject;
class UObject;
class USkinnedDecalSampler;

UCLASS(Blueprintable)
class BF_IMPACTS_API UIGS_ImpactManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableBloodImpacts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_ImpactTypeObject>> LoadedIDs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, float> HitImpactCooldownMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ImpactManagerSettings* ImpactManagerSettings;
    
public:
    UIGS_ImpactManager();

    UFUNCTION(BlueprintCallable)
    static void CreateSkinnedDecalImpact(USkinnedDecalSampler* inSampler, const FHitResult& inHitResult, EIGS_WoundType inWoundType);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBloodSpatterImpact(const AIGS_GameCharacterFramework* inHitCharacter, UIGS_ImpactManager* inImpactManager, FIGS_ImpactParameters inParameters, const FHitResult& inHitResult);
    
};

