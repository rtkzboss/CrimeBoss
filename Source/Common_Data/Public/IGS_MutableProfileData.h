#pragma once
#include "CoreMinimal.h"
#include "IGS_CustomizationArchive.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "IGS_MutableProfileData.generated.h"

class UCustomizableObjectInstance;
class UCustomizableObjectPopulation;
class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_MutableProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableObjectInstance* MutableInstanceTPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableObjectInstance* MutableInstanceFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableObjectPopulation* OverridePopulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CustomizationArchive MutableProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CharacterIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSecondPopulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DialogueHeisterCharacter DialogueID;
    
    COMMON_DATA_API FIGS_MutableProfileData();
};

