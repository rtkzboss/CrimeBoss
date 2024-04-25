#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_WeaponIconReadyOutputPinDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_WaitForWeaponIcon.generated.h"

class UIGS_WaitForWeaponIcon;
class UIGS_WeaponSkinData;
class UMETA_WeaponInventoryObject;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_WaitForWeaponIcon : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponIconReadyOutputPin WhenWeaponIconReady;
    
    UIGS_WaitForWeaponIcon();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForWeaponIcon* WaitForWeaponIcon(UObject* inWorldContextObject, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponObject, TSoftObjectPtr<UIGS_WeaponSkinData> inSkin);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecuteOnIconReady(TSoftObjectPtr<UTexture2D> inWeaponIcon);
    
};

