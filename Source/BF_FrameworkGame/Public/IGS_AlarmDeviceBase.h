#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_AnimTypeVariantHolder.h"
#include "IGS_SmartObjectInterface.h"
#include "IGS_AlarmDeviceBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AIDirector;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AlarmDeviceBase : public AActor, public IIGS_SmartObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AIMovetoPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AnimationRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AnimTypeVariantHolder AnimationToPlay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_AIDirector> AIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnlockAfterTime;
    
public:
    AIGS_AlarmDeviceBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisarmed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Disarm(AIGS_GameCharacterFramework* inUsingCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

