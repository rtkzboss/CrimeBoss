#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "GameplayTagContainer.h"
#include "IGS_AIDangerEvent.h"
#include "IGS_AISense_Danger.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class BF_AI_API UIGS_AISense_Danger : public UAISense {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AIDangerEvent> RegisteredEvents;
    
public:
    UIGS_AISense_Danger();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void ReportGrenadeThrowing(UObject* WorldContextObject, AActor* DangerActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void ReportDangerAreaWithTag(UObject* WorldContextObject, AActor* DangerActor, FGameplayTag Tag, float Radius, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void ReportDangerArea(UObject* WorldContextObject, AActor* DangerActor, float Radius, float Duration);
    
};

