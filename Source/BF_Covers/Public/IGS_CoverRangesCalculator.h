#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_CoverPointDataHolder.h"
#include "IGS_CoverRangesCalculator.generated.h"

class UWorld;

UCLASS(Blueprintable)
class BF_COVERS_API AIGS_CoverRangesCalculator : public AActor {
    GENERATED_BODY()
public:
    AIGS_CoverRangesCalculator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void TestCompute(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    static void LoadCoverRanges(UWorld* InWorld, AActor* inLSA, FName inVariantName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_CoverPointDataHolder> GetCoverPointDataHolders(UWorld* InWorld, bool inUseCoverZones, bool inDebugDraw);
    
};

