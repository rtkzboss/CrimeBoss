#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Pawn.h"
#include "IGS_GeneralListenerHeardEventDelegate.h"
#include "IGS_GeneralListener.generated.h"

class AIGS_GeneralListener;
class AIGS_GeneralListenerExclusionVolume;
class UObject;

UCLASS(Blueprintable)
class BF_AI_API AIGS_GeneralListener : public APawn, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SupportedHearingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartsActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GeneralListenerHeardEvent OnHeardEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GeneralListenerExclusionVolume*> ExclusionVolumes;
    
public:
    AIGS_GeneralListener(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActive(bool Inactive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIGS_GeneralListener* GetGeneralListener(const UObject* inWCO);
    

    // Fix for true pure virtual functions not being implemented
};

