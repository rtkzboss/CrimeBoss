#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_Pier.generated.h"

class AIGS_Vessel_Base;
class APawn;
class UArrowComponent;
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_RIDEABLEVEHICLES_API AIGS_Pier : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsDocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> ExitPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AIGS_Vessel_Base* CurrentVessel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SafeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Bridge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DockZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* FirstPlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SecondPlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ThirdPlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* FourthPlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RightDockArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LeftDockArrow;
    
public:
    AIGS_Pier(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void VesselExited(AIGS_Vessel_Base* inVessel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void VesselEntered(AIGS_Vessel_Base* inVessel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDocking(const FTransform& inTargetTransform, const FTransform& inFromTransform, AIGS_Vessel_Base* inVessel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitedVehicle(APawn* inVessel, int32 inSeatIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnteredVehicle(APawn* inVessel, int32 inSeatIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform FindBestTransformToDock(AActor* inActor) const;
    
    UFUNCTION(BlueprintCallable)
    void DockZoneEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void DockZoneBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DockVessel_MULTICAST(const FTransform& inTargetTransform, const FTransform& inFromTransform, AIGS_Vessel_Base* inVessel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ClosestSafePointTo(const FVector& inTarget);
    
};

