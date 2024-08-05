#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_StaticVehicleBase.generated.h"

class UNavModifierComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_StaticVehicleBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnColorChanged, meta=(AllowPrivateAccess=true))
    FColor mR_Color;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearCanAffectNavigationFlag;
    
public:
    AIGS_StaticVehicleBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetColor(FColor InColor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnColorChanged() const;
    
};

