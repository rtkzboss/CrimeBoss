#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_InspectRecord.h"
#include "IGS_MoveRecord.h"
#include "IGS_ShoutAtRecord.h"
#include "IGS_StickyTargetInfo.h"
#include "IGS_StrafeRecord.h"
#include "IGS_ZiptieRecord.h"
#include "IGS_AIDesyncronizer.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_AIDesyncronizer : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_StrafeRecord> StrafeRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MoveRecord> MoveToRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ZiptieRecord> ZiptieRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ShoutAtRecord> ShoutAtRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_StickyTargetInfo> m_StickyTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_InspectRecord> m_MovingInspectsRecords;
    
public:
    UIGS_AIDesyncronizer();

};

