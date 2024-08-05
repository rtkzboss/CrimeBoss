#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "EIGS_CameraOutlineState.h"
#include "IGS_SubControllerMountableInterface.h"
#include "IGS_Crane.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UAkComponent;
class UArrowComponent;
class UBoxComponent;
class UIGS_CraneObjectComponent;
class UIGS_InteractiveComponent;
class UInstancedStaticMeshComponent;
class UPrimitiveComponent;
class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_Crane : public APawn, public IIGS_SubControllerMountableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CraneTopModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MagnetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MagnetComponentMinMovePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MagnetComponentMaxMovePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MagnetHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MagnetHeadSweepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MagnetHeadPinPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MagnetHeadTopPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* CableInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MagnetBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DetectionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RotateStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RotateStopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MagnetToggleOnAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MagnetToggleOffAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MagnetLiftStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MagnetLiftStopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MagnetMoveStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MagnetMoveStopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EngineStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EngineStopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CraneIgnoreList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableMeshHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiftSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraneTopModuleRotationChanged, meta=(AllowPrivateAccess=true))
    FRotator mR_CraneTopModuleRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagnetComponentLocationChanged, meta=(AllowPrivateAccess=true))
    FVector mR_MagnetComponentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagnetHeadLocationChanged, meta=(AllowPrivateAccess=true))
    FVector mR_MagnetHeadLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CableInstancesCountChanged, meta=(AllowPrivateAccess=true))
    int32 mR_CableInstancesCount;
    
public:
    AIGS_Crane(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UseCrane(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ToogleMagnetState();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMagnetState(bool inState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RotateCrane(float inAxisValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_MoveMagnet(float inAxisValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LiftMagnet(float inAxisValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ExitCraneControl();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagnetHeadLocationChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagnetComponentLocationChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraneTopModuleRotationChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CableInstancesCountChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagnetStateChanged(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCraneObjectsDetectorEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCraneObjectsDetectorBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraneObjectReleaseStateChanged(bool inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraneObjectReleased(UIGS_CraneObjectComponent* CraneObjectComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraneObjectPicked(UIGS_CraneObjectComponent* CraneObjectComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitComponents();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetObjectOutlineState(AActor* inOutlineObject, EIGS_CameraOutlineState inState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnCraneObjectPickStatusChanged(UIGS_CraneObjectComponent* inCraneObject, bool inState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnCraneObjectDetectionStatusChanged(UIGS_CraneObjectComponent* inCraneObject, bool inState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ExitCraneControl();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EnterCraneControl();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_RotateCraneStop();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_RotateCraneStart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnMagnetStateChanged(bool inState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_MoveMagnetStop();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_MoveMagnetStart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_LiftMagnetStop();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_LiftMagnetStart();
    

    // Fix for true pure virtual functions not being implemented
};

