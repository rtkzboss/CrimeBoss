#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_WeaponNotification.generated.h"

class UMETA_Weapon;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_WeaponNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_Weapon* m_Weapon;
    
public:
    UMETA_WeaponNotification();

    UFUNCTION(BlueprintCallable)
    void SetWeapon(UMETA_Weapon* inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Weapon* GetWeapon() const;
    
};

