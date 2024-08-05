#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_StealthVoiceoversInstance.generated.h"

class UIGS_StealthVoiceovers;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_StealthVoiceoversInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_StealthVoiceovers* StealthVoiceovers;
    
    UIGS_StealthVoiceoversInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactionVoiceoversDistanceMaxToPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactionVoiceoversCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGangstersOffenceReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGangstersBumpInto() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetDefaultGuardRadioReactionsForStrikes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetAmbientReportingEmpToGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetAmbientReportingCivUsingPhones() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAmbientReportingCivToGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAmbientReportingCivToEmp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAmbientPanicShootout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAmbientPanicAimAt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAmbientPanic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAmbientInspect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAmbientDutyPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAmbientDutyItem() const;
    
};

