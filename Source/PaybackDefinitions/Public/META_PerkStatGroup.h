#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EMETA_PerkStatGroupUsage.h"
#include "META_PerkStatGroup.generated.h"

USTRUCT(BlueprintType)
struct FMETA_PerkStatGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayAttribute> PerkAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_PerkStatGroupUsage Type;
    
    PAYBACKDEFINITIONS_API FMETA_PerkStatGroup();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_PerkStatGroup) { return 0; }

