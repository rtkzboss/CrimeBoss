#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayTagAssetInterfaceCustom.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_DefendPointRotationType.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_DefendPointBase.generated.h"

class AIGS_GameCharacterFramework;
class UCoverPoint;
class UShapeComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_DefendPointBase : public AIGS_WaypointVisitable, public IIGS_GameplayTagAssetInterfaceCustom {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* DefendShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOnlyManualCovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DefendPointRotationType RotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCoverPoint*> Covers;
    
public:
    AIGS_DefendPointBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefendRotationPoint(FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDefenedArea(FVector position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefendLookAtPosition(FVector querrierPos) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_GameCharacterFramework*> GetDefendingCharacters(EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_GameCharacterFramework*> GetCharactersInside(EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_GameCharacterFramework*> GetArrivingCharacters(EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_GameCharacterFramework*> GetAllDefendingCharacters();
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_GameCharacterFramework*> GetAllCharactersInside();
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_GameCharacterFramework*> GetAllArrivingCharacters();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

