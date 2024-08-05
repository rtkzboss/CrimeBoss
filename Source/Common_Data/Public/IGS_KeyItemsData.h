#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_CommonItemData.h"
#include "IGS_KeyItemsData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_KeyItemsData : public FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_RoomSecurityType KeySecurity;
    
    FIGS_KeyItemsData();
};

