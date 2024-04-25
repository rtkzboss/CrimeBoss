#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_RoomSecurityType.h"
#include "EIGS_RoomType.h"
#include "EIGS_PlayerLockState.h"
#include "IGS_OnLockStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_LockComponent.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InventoryObjectFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_RoomType KeyRoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_RoomSecurityType KeyRoomSecurityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UniqueKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InventoryObjectFramework> EmployeeKeyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InventoryObjectFramework> SecurityKeyClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnLockStateChanged OnLockStateChanged;
    
    UIGS_LockComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLockState(bool inLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLockState() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLockedStateForPlayer(AIGS_GameCharacterFramework* inInstigator, EIGS_PlayerLockState& outBranches);
    
};

