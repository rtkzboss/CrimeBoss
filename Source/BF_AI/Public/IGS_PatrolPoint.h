#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_AIMontageSOVariant.h"
#include "IGS_WaypointEventSignatureDelegate.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_PatrolPoint.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class AIGS_WaypointBase;
class AIGS_WaypointFramework;
class UIGS_AICommand;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_PatrolPoint : public AIGS_WaypointVisitable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRedirectPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCannotSkipPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionLookAtPosDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_AIMontageSOVariant> AnimationsToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnimationsToPlayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WaypointFramework* NextPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WaypointBase* NextPointCasted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaypointEventSignature OnWaitStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaypointEventSignature OnWaitFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaypointEventSignature OnOutAnimationStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> m_Visitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_AIControllerGame> m_VisitorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_AICommand> m_CurrentCommand;
    
public:
    AIGS_PatrolPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisitorManully(AIGS_GameCharacterFramework* inGameCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetVisitor() const;
    
    UFUNCTION(BlueprintCallable)
    EIGS_AIMontageSOVariant GetRandomAnimation();
    
};

