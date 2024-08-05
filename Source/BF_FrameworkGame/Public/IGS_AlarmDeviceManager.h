#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_AlarmDeviceManager.generated.h"

class AIGS_AlarmButtonBase;
class AIGS_TelephoneBase;
class AIGS_WalkieTalkie;
class UIGS_AlarmDeviceManager;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AlarmDeviceManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AlarmButtonBase*> AlarmButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_TelephoneBase*> Telephones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_TelephoneBase*> ControlRoomTelephones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WalkieTalkie*> WalkieTalkies;
    
    UIGS_AlarmDeviceManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_AlarmDeviceManager* Instance(const UObject* inWorldContextObject);
    
};

