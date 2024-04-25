#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterState.h"
#include "EIGS_Speed.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_ShootingOverrideType.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "IGS_ScriptingCommandsLibrary.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_MountedWeapon;
class UObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ScriptingCommandsLibrary();

    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandUseFullPercetion(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandStopFollowCharacter(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandShootOverridePos(AIGS_GameCharacterFramework* Instigator, FVector Pos, EIGS_ShootingOverrideType ShootingType);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandShootOverrideActor(AIGS_GameCharacterFramework* Instigator, AActor* Actor, FVector Offset, EIGS_ShootingOverrideType ShootingType);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandSetZiptied(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandSetUnkillable(AIGS_GameCharacterFramework* inInstigator, bool inIsUnkillable);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandSetSpeed(AIGS_GameCharacterFramework* Instigator, EIGS_Speed Speed);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandSetInvunurable(AIGS_GameCharacterFramework* Instigator, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandSetInstantKillable(AIGS_GameCharacterFramework* inInstigator, bool inIsInstantKillable);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandSetCrouch(AIGS_GameCharacterFramework* Instigator, bool Crouch);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandSetCharacterState(AIGS_GameCharacterFramework* Instigator, EIGS_CharacterState State);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandRevive(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandPauseAI(UObject* inWCO, AIGS_GameCharacterFramework* inInstigator, const bool inPause);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandKill(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandIsValidTarget(AIGS_GameCharacterFramework* Instigator, bool InValue, UObject* inLocker);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandHeistersStopDefend(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandHeistersReviveEnabled(const UObject* inWCO, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandHeistersBackupReviveEnabled(const UObject* inWCO, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandForceWeapon(AIGS_GameCharacterFramework* Instigator, EIGS_SwitchWeaponTask_WeaponType WeaponType);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandForceMountedWeapon(AIGS_GameCharacterFramework* Instigator, AIGS_MountedWeapon* mountedWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandForceInjured(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandForceDownstate(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandForceCombatTarget(AIGS_GameCharacterFramework* Instigator, AIGS_GameCharacterFramework* Target);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandEnableGeneralReaction(AIGS_GameCharacterFramework* Instigator, bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandEnableFire(AIGS_GameCharacterFramework* Instigator, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandEnableBotSwitch(UObject* inWCO, AIGS_GameCharacterFramework* inInstigator, const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandEnableAmmoBoxDrop(AIGS_GameCharacterFramework* inInstigator, const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandDefend(AIGS_GameCharacterFramework* inCharacter, FVector InLocation, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandClearShootOverride(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptingCommandCancelScriptedBehavior(AIGS_GameCharacterFramework* Instigator);
    
};

