#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScriptPointExecuteOn.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_ScriptPoint.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_WaypointBase;
class AIGS_WaypointFramework;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_ScriptPoint : public AIGS_WaypointVisitable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ScriptPointExecuteOn ExecuteOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionLookAtPosDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEverBeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WaypointFramework* OptionalNextPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WaypointBase* OptionalNextPointCasted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> VisitingCharacters;
    
public:
    AIGS_ScriptPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryActivateScriptPoint(AIGS_GameCharacterFramework* inActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVisit(AIGS_GameCharacterFramework* inActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeave(AIGS_GameCharacterFramework* inActivator, bool inIsAbort);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnArrive(AIGS_GameCharacterFramework* inActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApproach(AIGS_GameCharacterFramework* inActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRedirectPointBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLockedBlueprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    AIGS_WaypointBase* GetNextPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetExtraArrowActors();
    
    UFUNCTION(BlueprintCallable)
    void Finish(AIGS_GameCharacterFramework* inActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(AIGS_GameCharacterFramework* inActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeActivatedBy(AIGS_GameCharacterFramework* inActivator);
    
};

