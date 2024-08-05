#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomType.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_KeyItemInventoryObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_KeyItemInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_RoomType KeyRoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UniqueName;
    
    UIGS_KeyItemInventoryObject();

};

