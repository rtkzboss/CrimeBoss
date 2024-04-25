#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_CharactersTeamSidesHolder.h"
#include "IGS_GeneralListenerRegisteredDelegate.h"
#include "IGS_OnCharacterRegisteredDynamicSignatureDelegate.h"
#include "IGS_OnCharacterUnregisteredDynamicSignatureDelegate.h"
#include "IGS_AIDirector.generated.h"

class AActor;
class AIGS_ControlRoomBase;
class AIGS_GameCharacterFramework;
class UIGS_AIDifficultyManager;
class UIGS_AIEventsDispatcher;
class UIGS_AIPointManager;
class UIGS_AISpawner;
class UIGS_AmbientLifeManager;
class UIGS_DefendManager;
class UIGS_DetectionManager;
class UIGS_GuardControlRoomComponentBase;
class UIGS_MountedWeaponManager;
class UIGS_PressureManager;
class UIGS_TrafficManager;
class UIGS_WaveManager;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AIDirector : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterRegisteredDynamicSignature OnCharacterRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterUnregisteredDynamicSignature OnCharacterUnregisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterRegisteredDynamicSignature OnPlayerCharacterRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterUnregisteredDynamicSignature OnPlayerCharacterUnregisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterRegisteredDynamicSignature OnHeisterCharacterRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterUnregisteredDynamicSignature OnHeisterCharacterUnregisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterRegisteredDynamicSignature OnBotCharacterRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterUnregisteredDynamicSignature OnBotCharacterUnregisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GeneralListenerRegistered OnGeneralListenerRegistered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WaveManager* m_WaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AISpawner* m_AISpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PressureManager* m_PressureManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AIEventsDispatcher* m_AIEventsDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AmbientLifeManager* m_AmbientLifeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_DefendManager* m_DefendManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_DetectionManager* m_DetectionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MountedWeaponManager* m_MountedWeaponManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AIPointManager* m_AIPointsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_TrafficManager* m_TrafficManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AIDifficultyManager* m_AIDifficultyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_GeneralListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EIGS_TeamSideEnum, FIGS_CharactersTeamSidesHolder> m_TeamSideCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> m_AllCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> m_AllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> m_AllBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> m_AllHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, AIGS_ControlRoomBase*> m_AllControlRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UIGS_GuardControlRoomComponentBase*> m_AllControlRoomComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> m_GlobalAggros;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FTimerHandle> m_ActorsPendingAggroRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MatchStartedForAI;
    
public:
    UIGS_AIDirector();

    UFUNCTION(BlueprintCallable)
    void SetGlobalAggro(AActor* inActor, float InFloat, const AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalAggroEntry(AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    UIGS_WaveManager* GetWaveManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_TrafficManager* GetTrafficManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_PressureManager* GetPressureManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_MountedWeaponManager* GetMountedWeaponManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlobalAggro(const AActor* inActor, const AActor* inInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_DetectionManager* GetDetectionManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_DefendManager* GetDefendManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_ControlRoomBase* GetControlRoomForSquad(int32 inSquadID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_GuardControlRoomComponentBase* GetControlRoomComponentForSquad(int32 inSquadID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_AmbientLifeManager* GetAmbientLifeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_AISpawner* GetAISpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_AIPointManager* GetAIPointsManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_AIEventsDispatcher* GetAIEventsDispatcher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_AIDifficultyManager* GetAIDifficultyManager() const;
    
};

