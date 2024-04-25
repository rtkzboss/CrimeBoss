#pragma once
#include "CoreMinimal.h"
#include "IGS_CamerasDisabledSignatureDelegate.generated.h"

class AIGS_SecurityCameraViewer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CamerasDisabledSignature, AIGS_SecurityCameraViewer*, inCameraViewer);

