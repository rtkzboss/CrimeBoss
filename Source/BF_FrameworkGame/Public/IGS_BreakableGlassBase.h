#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EGlassShape.h"
#include "EIGS_GlassRegularPreset.h"
#include "IGS_BreakableGlassBase.generated.h"

class USceneComponent;

UCLASS(Blueprintable, Config=Engine)
class BF_FRAMEWORKGAME_API AIGS_BreakableGlassBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_GlassRegularPreset GlassPanelPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleUniform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGlassShape> GlassType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverAffectNavigation;
    
    AIGS_BreakableGlassBase(const FObjectInitializer& ObjectInitializer);

};

