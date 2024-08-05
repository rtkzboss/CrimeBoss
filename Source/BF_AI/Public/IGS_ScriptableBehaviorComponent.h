#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BoolParamChangedBP2Delegate.h"
#include "IGS_ScriptableBehaviorComponent.generated.h"

class AIGS_AIControllerGame;
class AIGS_DefendPointBase;
class AIGS_RoomBase;
class UCoverPoint;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_ScriptableBehaviorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolParamChangedBP2 OnIsDefendingChangedBP2;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> EmptyRoomArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_AIControllerGame* m_Controller;
    
public:
    UIGS_ScriptableBehaviorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefendPositionBP(FVector InPosition, float inDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetDefendPoint(AIGS_DefendPointBase* defendPoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDefending(bool NewValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDefending() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UCoverPoint*> GetDefendValidCoverPoints();
    
    UFUNCTION(BlueprintCallable)
    FVector GetDefendPos();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefendLookAt(FVector querrierLocation) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UCoverPoint*> GetDefendCoverPoints();
    
    UFUNCTION(BlueprintCallable)
    void ClearDefendPos();
    
};

