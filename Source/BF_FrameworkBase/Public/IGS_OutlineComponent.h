#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_CameraOutlineState.h"
#include "IGS_OutlineComponent.generated.h"

class AActor;
class UMeshComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_OutlineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentOutlineState, meta=(AllowPrivateAccess=true))
    EIGS_CameraOutlineState CurrentOutlineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CameraOutlineState LocalOverrideOutlineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRootForOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShineWhenInactive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> m_ComponentsToOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSolidInteractiveOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlinkingInteractiveOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPingOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnemyDetectingOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnemyPingOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bObjectiveOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHeisterOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHeister2Outline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHeister3Outline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHeister4Outline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBackupHeisterOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHighlightOutline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsShineEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSmartPinged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRobotHighlighted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVanHighlighted: 1;
    
public:
    UIGS_OutlineComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetOutlineCategoryState(EIGS_CameraOutlineState inCategory, bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalOutlineCategoryState(EIGS_CameraOutlineState inCategory, bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalCharacterOutline(const bool inEnabled, const bool inIsBackup);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSmartPinged(const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHeisterOutlineCategoryState(const AActor* inHeisterReference, const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentsToOutline(const TArray<USceneComponent*>& inComponentsToOutline);
    
    UFUNCTION(BlueprintCallable)
    void ResetOutline();
    
    UFUNCTION(BlueprintCallable)
    void RemoveComponentToOutline(UActorComponent* inComponentToOutline);
    
    UFUNCTION(BlueprintCallable)
    void RemoveComponentsToOutline(const TArray<UActorComponent*>& inComponentsToOutline);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentOutlineState();
    
    UFUNCTION(BlueprintCallable)
    void AddComponentToOutline(UActorComponent* inComponentToOutline);
    
    UFUNCTION(BlueprintCallable)
    void AddComponentsToOutline(const TArray<UActorComponent*>& inComponentsToOutline);
    
};

