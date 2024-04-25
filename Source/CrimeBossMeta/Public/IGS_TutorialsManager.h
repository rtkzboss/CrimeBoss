#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_TutorialsManager.generated.h"

class UIGS_PaybackSaveGameAccount;
class UIGS_SaveManager;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_TutorialsManager : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_SaveManager* m_SaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;
    
public:
    UIGS_TutorialsManager();

    UFUNCTION(BlueprintCallable)
    void ResetAllTutorials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialCompleted(const FGameplayTag inTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTutorialsEnabled() const;
    
};

