#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BackgroundChangeFinishedDelegate.h"
#include "IGS_BossBackgroundManager.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_BossBackgroundManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackgroundChangeFinished OnBackgroundChangeFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BackgroundChangeInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CurrentLevelToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WaitingLevelToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsAnyBackgroundLoaded;
    
public:
    UIGS_BossBackgroundManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UnloadIncorrectLevel(FName inLevelToUnload);
    
    UFUNCTION(BlueprintCallable)
    void LoadCorrectLevel(FName inLevelToLoad);
    
    UFUNCTION(BlueprintCallable)
    void LevelHandlingFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsBackgroundChangeInProgress();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyBackgroundLoaded();
    
private:
    UFUNCTION(BlueprintCallable)
    void IncorrectLevelUnloaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleBackgroundSublevel(FName inLevelToLoad);
    
    UFUNCTION(BlueprintCallable)
    FName GetNameForLevel(int32 inLevel);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetLoadedBackgroundLevelNames() const;
    
};

