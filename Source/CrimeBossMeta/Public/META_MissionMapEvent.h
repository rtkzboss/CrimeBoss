#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BaseMapEvent.h"
#include "META_MissionMapEvent.generated.h"

class UMETA_BaseMission;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_MissionMapEvent : public UMETA_BaseMapEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BaseMission* m_Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_TileTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsNew;
    
public:
    UMETA_MissionMapEvent();

    UFUNCTION(BlueprintCallable)
    void Init(UMETA_BaseMission* inMission, FGameplayTag inTileTag, bool inIsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTileTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_BaseMission* GetMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNew();
    
};

