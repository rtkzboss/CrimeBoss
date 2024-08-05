#pragma once
#include "CoreMinimal.h"
#include "IGS_OffenceChangedEventSignatureDelegate.generated.h"

class UIGS_AISuspiciousnessComponentBase;
class UIGS_OffenceData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OffenceChangedEventSignature, UIGS_AISuspiciousnessComponentBase*, inSuspiciousnessComponent, UIGS_OffenceData*, inNewOffence);

