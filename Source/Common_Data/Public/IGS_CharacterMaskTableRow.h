#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_MaskAkType.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterMaskTableRow.generated.h"

class UIGS_CharacterMaskBase;
class UMeshComponent;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CharacterMaskTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_CharacterMaskBase> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMeshComponent> MaskMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MaskAkType MaskAkType;
    
    FIGS_CharacterMaskTableRow();
};

