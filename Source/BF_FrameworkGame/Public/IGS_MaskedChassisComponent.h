#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "EIGS_RadialImpactChassis.h"
#include "Templates/SubclassOf.h"
#include "IGS_MaskedChassisComponent.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UCurveVector;
class UDamageType;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_MaskedChassisComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakableEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearViewMirrorUVSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftSideMirrorUVSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RightSideMirrorUVSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearViewMirrorAttachedToSection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearViewMirrorShaderSlot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftSideMirrorShaderSlot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RightSideMirrorShaderSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LeftRearViewMirrorDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftRearViewMirrorSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RightRearViewMirrorDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightRearViewMirrorSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RearViewMirrorDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RearViewMirrorSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* SwingOnPunctureCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRadialImpactAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RadialImpactAnimFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RadialImpactAnimFrontLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RadialImpactAnimLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RadialImpactAnimRearLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RadialImpactAnimRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RadialImpactAnimRearRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RadialImpactAnimRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RadialImpactAnimFrontRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InRadialDamageMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InRadialDamageMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutRadialDamageMultiplierMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutRadialDamageMultiplierMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCarAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CarAlarm;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerRef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeline Timeline;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeline RadialImpactTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChassisState, meta=(AllowPrivateAccess=true))
    bool mR_bRearViewMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChassisState, meta=(AllowPrivateAccess=true))
    bool mR_bDoorLeftRearView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChassisState, meta=(AllowPrivateAccess=true))
    bool mR_bDoorRightRearView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_RadialImpactChassis RadialHitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCarAlarmTriggered;
    
public:
    UIGS_MaskedChassisComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TriggerCarAlarm();
    
    UFUNCTION(BlueprintCallable)
    void SetBreakable(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void OnWindowInstanceBroken(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTirePuncturedUpdate(FVector CurveValue);
    
    UFUNCTION(BlueprintCallable)
    void OnTirePuncturedFinish();
    
    UFUNCTION(BlueprintCallable)
    void OnTirePunctured();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChassisState();
    
    UFUNCTION(BlueprintCallable)
    void OnRadialImpactUpdate(FVector CurveValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRadialImpactFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsBreakable();
    
    UFUNCTION(BlueprintCallable)
    void ChassisTakeRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void ChassisTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void BreakSection(int32 InVIndex, int32 InDesiredVIndex, int32 InDesiredShaderSlot, FName InDesiredSocketName, TSubclassOf<AActor> InDesiredDebris, bool& OutSectionState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_HandleMaskedSection(FVector_NetQuantize ImpactPoint, FVector_NetQuantizeNormal ShotFrom);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_BreakSection(int32 InVIndex, int32 InDesiredVIndex, int32 InDesiredShaderSlot, FName InDesiredSocketName, TSubclassOf<AActor> InDesiredDebris, bool OutSectionState);
    
};

