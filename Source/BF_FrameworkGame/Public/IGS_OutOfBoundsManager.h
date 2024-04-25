#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_OutOfBoundsChangedSignatureDelegate.h"
#include "IGS_OutOfBoundsCharacterData.h"
#include "Templates/SubclassOf.h"
#include "IGS_OutOfBoundsManager.generated.h"

class AIGS_LevelBlockingBounds;
class AIGS_PlayerCharacter;
class UIGS_LeavingMissionWidget;
class UIGS_LevelBlockingBoundsSettings;
class UUserWidget;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_OutOfBoundsManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_LevelBlockingBoundsSettings* Settings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OutOfBoundsChangedSignature OnOutOfBoundsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AIGS_PlayerCharacter*, FIGS_OutOfBoundsCharacterData> CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> OutOfBoundsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_LeavingMissionWidget* OutOfBoundsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LevelBlockingBounds*> LevelBlockingBounds;
    
public:
    UIGS_OutOfBoundsManager();

    UFUNCTION(BlueprintCallable)
    void ResetOutOfBoundsCounter(AIGS_PlayerCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void LeftOutOfBoundsArea(AIGS_PlayerCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfBounds(const AIGS_PlayerCharacter* inCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_LevelBlockingBounds*> GetAllLevelBlockingBoundsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_LevelBlockingBounds*> GetAllLevelBlockingBounds() const;
    
    UFUNCTION(BlueprintCallable)
    void EnteredOutOfBoundsArea(AIGS_PlayerCharacter* inCharacter);
    
};

