#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionResult.h"
#include "IGS_Screen.h"
#include "IGS_DebriefScreen.generated.h"

class UIGS_AnimatedWidget;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_DebriefScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSkipped;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_AnimatedWidget*> m_AnimationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AnimatedWidget* m_CurrentAnimatedWidget;
    
public:
    UIGS_DebriefScreen();

    UFUNCTION(BlueprintCallable)
    void StartAnimatedDebrief();
    
    UFUNCTION(BlueprintCallable)
    void SetMissionResult(UPARAM(Ref) FIGS_MissionResult& inMissionResult);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSkipped(bool inIsSkipped);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayNextAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimationFinishedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_MissionResult GetMissionResult() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAnimation(UIGS_AnimatedWidget* inAnimatedWidget, UObject* inPayloadData);
    
};

