#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitMarkersSetting.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_HitMarkerWidget.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class AIGS_WeaponBase;
class UIGS_SimpleHitScanShooter;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_HitMarkerWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerRoot* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WeaponBase* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HitMarkersSetting HitMarkersSetting;
    
    UIGS_HitMarkerWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileKillEnemy(bool inIsHeadshot, const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileHitEnemy(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileHeadshotEnemy(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSightScreenPosition();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSightOffsetFromScreenCenter();
    
    UFUNCTION(BlueprintCallable)
    void BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter);
    
};

