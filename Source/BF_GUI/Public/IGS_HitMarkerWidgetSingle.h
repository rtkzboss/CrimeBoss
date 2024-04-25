#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_HitMarkerWidgetSingle.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class AIGS_WeaponBase;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_HitMarkerWidgetSingle : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerRoot* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WeaponBase* CurrentWeapon;
    
    UIGS_HitMarkerWidgetSingle();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSightScreenPosition();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSightOffsetFromScreenCenter();
    
};

