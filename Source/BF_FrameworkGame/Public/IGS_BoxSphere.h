#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/BodyInstance.h"
#include "EIGS_BoxSphereShape.h"
#include "IGS_ActiveStateChangedDynamicSignatureDelegate.h"
#include "IGS_BoxSphere.generated.h"

class UIGS_CustomBoxComponent;
class UIGS_CustomSphereComponent;
class USceneComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_BoxSphere : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ActiveStateChangedDynamicSignature OnActiveStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_BoxSphereShape Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtentOrRadius, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtentOrRadius, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateOverlapEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableShapeSelection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CustomBoxComponent* BoxCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CustomSphereComponent* SphereCollisionComponent;
    
public:
    AIGS_BoxSphere(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool Inactive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActive();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtentOrRadius();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInShape(FVector InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_BoxSphereShape GetShapeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGenerateOverlapEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UShapeComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

