#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "EIGS_MPLobbyType.h"
#include "IGS_GameStateBaseWithData.h"
#include "META_GameModeAdapter.h"
#include "EIGS_AITiers.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_LobbyVisibilityType.h"
#include "META_ManagersExplorer.h"
#include "IGS_GameStateMenuBase.generated.h"

class AIGS_MenuSlotBase;
class APlayerState;
class UIGS_EconomyData_Base;
class UIGS_EntitlementItemsManagerBaseComponent;
class UIGS_MenuCommonData_Base;
class UIGS_UnlockManagerComponent;
class UMETA_LevelActorsManagerComponent;

UCLASS(Abstract, Blueprintable)
class CRIMEBOSSMETA_API AIGS_GameStateMenuBase : public AIGS_GameStateBaseWithData, public IMETA_GameModeAdapter, public IMETA_ManagersExplorer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_EconomyData_Base* EconomyBaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MenuCommonData_Base* CommonBaseData;
    
    AIGS_GameStateMenuBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUserDifficulty(EIGS_UserDifficulty inUserDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetMPLobbyType(EIGS_MPLobbyType inMPLobbyType);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyVisibility(EMETA_LobbyVisibilityType inLobbyVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayingChain(bool bIsChainMission);
    
    UFUNCTION(BlueprintCallable)
    void SetHeisterData(TArray<FCommonHeisterData> inHeisters);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyData(EIGS_GangsterVariationType inPrimaryEnemyVariation, EIGS_AITiers inPrimaryEnemyTier, EIGS_AITiers inAllyTier, EIGS_AITiers inSWATTier);
    
    UFUNCTION(BlueprintCallable)
    void PostInitGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetUnlockManager(UIGS_UnlockManagerComponent*& UnlockManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetMenuSlots(TArray<AIGS_MenuSlotBase*>& outMenuSlots) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMenuSlotBySlotIndex(int32 inSlotIndex, AIGS_MenuSlotBase*& outMenuSlot, bool& outFound);
    
    UFUNCTION(BlueprintCallable)
    void GetMenuSlotByPlayerState(APlayerState* inPlayerState, AIGS_MenuSlotBase*& outMenuSlot, bool& outFound);
    
    UFUNCTION(BlueprintCallable)
    void GetLocalMenuSlot(AIGS_MenuSlotBase*& outMenuSlot, bool& outFound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_LevelActorsManagerComponent* GetLevelActorsManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEntitlementItemsManager(UIGS_EntitlementItemsManagerBaseComponent*& EntitlmentItemsManager);
    
    UFUNCTION(BlueprintCallable)
    void ClearHeisterData();
    
    UFUNCTION(BlueprintCallable)
    void AddHeisterData(FCommonHeisterData inHeister);
    

    // Fix for true pure virtual functions not being implemented
};

