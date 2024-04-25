#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadFramework.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_AINotif.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SquadBase.generated.h"

class AIGS_GameCharacterFramework;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadBase : public AIGS_SquadFramework {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
public:
    AIGS_SquadBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Notify(EIGS_AINotif Type, AIGS_GameCharacterFramework* caller, AIGS_GameCharacterFramework* Target, FVector Pos, FVector dir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSquadMeanLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetRandomMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetNearestMember(FVector Pos, TArray<AIGS_GameCharacterFramework*> excludeCharacters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetNearestAliveMember(FVector Pos, TArray<AIGS_GameCharacterFramework*> excludeCharacters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetCenterMember() const;
    
};

