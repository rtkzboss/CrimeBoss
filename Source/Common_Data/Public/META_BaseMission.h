#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_DebriefType.h"
#include "EMETA_IntelUnlockLevel.h"
#include "EMETA_JobResult.h"
#include "EMETA_JobType.h"
#include "EMETA_LobbyVisibilityType.h"
#include "META_MissionDatabase.h"
#include "META_MissionOnTileInfo.h"
#include "Templates/SubclassOf.h"
#include "META_BaseMission.generated.h"

class UMETA_BaseMission;
class UMETA_MissionID;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UMETA_BaseMission : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaMissionExpired, UMETA_BaseMission*, Mission);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaMissionExpired OnMetaMissionExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_MissionOnTileInfo MissionOnTileInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_JobResult m_Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_JobResult m_AmbushResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_JobResult m_TotalResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EntitlementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanExpire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_LobbyVisibilityType m_LobbyVisibilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_UserDifficulty m_UserDifficulty;
    
public:
    UMETA_BaseMission();

    UFUNCTION(BlueprintCallable)
    void SetUserDifficulty(EIGS_UserDifficulty inNewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetTilePlacementIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningTile(FGameplayTag inTileTag);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionResult(EMETA_JobResult inNewMissionResult);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyVisibilityType(EMETA_LobbyVisibilityType inNewVisibilityType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool inSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetExpireDuration(float inDurationInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbushResult(EMETA_JobResult inNewAmbushResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveParameter(const FGameplayTag inParameterTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurfWar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_UserDifficulty GetUserDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_JobType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTilePlacementIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetRestrictedTiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetPicture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParameters(TMap<FGameplayTag, int32>& Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParameter(const FGameplayTag inParameterTag, int32& inParameterValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetOwningTile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_JobResult GetMissionResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCrewSize();
    
    UFUNCTION(BlueprintCallable)
    void GetMapSettings(EIGS_HubBackdropTypes& outHubBackdropType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_LobbyVisibilityType GetLobbyVisibilityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntelLevelValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_IntelUnlockLevel> GetIntelLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_MissionID> GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon();
    
    UFUNCTION(BlueprintCallable)
    FMETA_MissionDatabase GetFullInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpireTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEntitlementTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_DebriefType GetDebriefType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysOnMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanExpire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_JobResult GetAmbushResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllowedTiles() const;
    
    UFUNCTION(BlueprintCallable)
    void ExpireMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSupportIntel() const;
    
    UFUNCTION(BlueprintCallable)
    void AddParameters(const TMap<FGameplayTag, int32>& inParameters);
    
    UFUNCTION(BlueprintCallable)
    void AddParameter(const FGameplayTag inParameterTag, int32 inParameterValue);
    
};

