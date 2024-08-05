#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AIControllerGame.h"
#include "IGS_OnDownstateHealthChangedEventSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIControllerDetective.generated.h"

class AIGS_IntelligentGameCharacter;
class UMETA_DetectiveID;

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerDetective : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDownstateHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRevivesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDownstateHealth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval GetUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RevivesToRetreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideDownstateHealthBar;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDownstateHealthChangedEventSignature OnDownstateHealthChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_DetectiveID> m_MyMetaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* m_IntelligentOwner;
    
public:
    AIGS_AIControllerDetective(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_DetectiveID> GetDetectiveID() const;
    
};

