#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomType.h"
#include "IGS_RoomTypeChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_RoomTypeChangedSignature, EIGS_RoomType, outRoomType, EIGS_RoomType, outPreviousRoomType);

