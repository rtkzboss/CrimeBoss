#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_DebugSubsystemBlueprint.generated.h"

class AActor;
class UIGS_DebugTogglesWidget;
class UPhysicalMaterial;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class BF_DEBUG_API UIGS_DebugSubsystemBlueprint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_DebugTogglesWidget> DebugMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SWATClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> HeisterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DamageNumbersWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> FearNumbersWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> AmmoClassLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> AmmoClassSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum SpawnTeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnMinChokePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnMaxChokePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCustomMission;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DebugTogglesWidget* DebugMenu;
    
public:
    UIGS_DebugSubsystemBlueprint();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnUnits(EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpec, int32 inCount, FTransform InTransform);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnFearNumbers(float inFear, FVector inActorLocation, bool inIsDuty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDamageNumbers(float inDamage, UPhysicalMaterial* inPhysicalMaterialHit, FVector inActorLocation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquandToAI(AActor* inAI, AActor* inSquad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* CreateSquad(UObject* inWCO, EIGS_TeamSideEnum inTeamSide);
    
};

