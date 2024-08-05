#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelSettings.h"
#include "IGS_GameLevelScriptActor.h"
#include "GameplayTagContainer.h"
#include "IGS_GeneratorVariantData.h"
#include "IGS_LevelBuilderRepProperties.h"
#include "Templates/SubclassOf.h"
#include "IGS_LevelBuilder_LevelScriptActor.generated.h"

class AIGS_ObjectiveScenarioBase;
class AIGS_ScriptManagerBase;
class UIGS_RandomStreamHolder;

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API AIGS_LevelBuilder_LevelScriptActor : public AIGS_GameLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelSettings LevelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_ObjectiveScenarioBase> ObjectiveScenarioTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_ScriptManagerBase> ScriptManagerTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultMissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultScenarioTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionsString;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Seed, meta=(AllowPrivateAccess=true))
    FIGS_LevelBuilderRepProperties mR_RepProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_RandomStreamHolder* m_RandomStreamHolder;
    
public:
    AIGS_LevelBuilder_LevelScriptActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RunDefaultVariant(UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Seed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepareData(UIGS_RandomStreamHolder* RandomStreamHolder);
    
};

