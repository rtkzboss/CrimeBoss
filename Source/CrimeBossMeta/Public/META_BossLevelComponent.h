#pragma once
#include "CoreMinimal.h"
#include "META_PerkData.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "IGS_BossLevelBaseComponent.h"
#include "META_BossLevelComponent.generated.h"

class UMETA_BossLevelData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_BossLevelComponent : public UIGS_BossLevelBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BossLevelData* BossLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfPrimaryWeaponsIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfAdditionalEquipmentIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalBossPointAfterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousPoints;
    
public:
    UMETA_BossLevelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FMETA_PerkData> CalculateBossPerksByBossLevel(EIGS_CharacterID inBossID, FGameplayTag inBossTagID, int32 inBossLevel, UPARAM(Ref) TArray<FMETA_PerkData>& inCurrentPerks);
    
};

