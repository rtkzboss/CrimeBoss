#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_AssetsPreloaderTableRow.h"
#include "IGS_AssetsPreloaderDatabase.generated.h"

class AAssetsPreloader;
class UIGS_AssetsPreloaderData;
class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_AssetsPreloaderDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> LoadedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedObjects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAssetsPreloader* m_AssetsPreloader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AssetsPreloaderData* m_AssetsPreloaderData;
    
public:
    UIGS_AssetsPreloaderDatabase();

    UFUNCTION(BlueprintCallable)
    static void UseOrCreateAssetsPreloader(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_AssetsPreloaderTableRow GetDataPreloader(UObject* inWCO, const FGameplayTag& inID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyAssetsPreloader(UObject* inWCO);
    
};

