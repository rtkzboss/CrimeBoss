#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OffenceChangedEventSignatureDelegate.h"
#include "SusPlayerInfo.h"
#include "IGS_AISuspiciousnessComponentBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class UIGS_OffenceData;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AISuspiciousnessComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OffenceChangedEventSignature OnOffenceChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AIGS_PlayerCharacter*, FSusPlayerInfo> m_PlayerSusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_SusActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* AlertedByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AlertedByCharacterSusObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_OffenceData* m_Offence;
    
public:
    UIGS_AISuspiciousnessComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsReacting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlerted() const;
    
    UFUNCTION(BlueprintCallable)
    AIGS_GameCharacterFramework* GetAlertedByCharacter();
    
    UFUNCTION(BlueprintCallable)
    void ClearOffence();
    
};

