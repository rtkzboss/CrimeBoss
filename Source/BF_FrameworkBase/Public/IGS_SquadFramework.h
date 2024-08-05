#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SquadFramework.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class BF_FRAMEWORKBASE_API AIGS_SquadFramework : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> EMPTY_FOR_COMPILE_ONLY;
    
public:
    AIGS_SquadFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeamSide(const EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TeamSideEnum GetTeamSide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_GameCharacterFramework*> GetSquadMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSquadID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAliveMemberCount() const;
    
};

