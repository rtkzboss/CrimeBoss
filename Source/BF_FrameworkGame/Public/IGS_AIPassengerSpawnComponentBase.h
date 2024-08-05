#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EIGS_CarSeatVariant.h"
#include "EIGS_CarType.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "IGS_OnCharacterDeathSignatureDelegate.h"
#include "IGS_OnCharactersSpawnedSignatureDelegate.h"
#include "IGS_OnPassengerGettingOutDynamicSignatureDelegate.h"
#include "IGS_PassangerDefinition.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIPassengerSpawnComponentBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_SettingsID;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AIPassengerSpawnComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_SettingsID> SettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CarType CarType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval PassangersCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_PassangerDefinition> PassengersDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlaySpawnVoiceovers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharacterDeathSignature OnCharacterDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCharactersSpawnedSignature OnCharactersSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnPassengerGettingOutDynamicSignature OnPassengerGettingOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> Passengers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SocketParentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NoSpawnPointDefinition CustomPassengerDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugSpheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfPassengersToSpawn;
    
    UIGS_AIPassengerSpawnComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnGroup(int32 inPassengersCount);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPassengersDefinition(const FIGS_NoSpawnPointDefinition& inCustomPassengers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAIStateInCar(AIGS_GameCharacterFramework* inPassenger) const;
    
    UFUNCTION(BlueprintCallable)
    void MakeSpecificPassengerGetOut(int32 inPassengerIndex, int32 inSeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void MakePassengersGetOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomPassengerAmountInRange();
    
    UFUNCTION(BlueprintCallable)
    void AddPassengerManually(AIGS_GameCharacterFramework* inPassenger, EIGS_CarSeatVariant inSeatVariant);
    
};

