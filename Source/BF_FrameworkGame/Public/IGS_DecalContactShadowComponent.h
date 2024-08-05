#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_DecalContactShadowsSettings.h"
#include "IGS_DecalContactShadowComponent.generated.h"

class UDecalComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DecalContactShadowComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* LeftLegShadowDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* RightLegShadowDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DecalContactShadowsSettings MaleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DecalContactShadowsSettings FemaleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DecalContactShadowsSettings FemaleHeelsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DecalContactShadowsSettings CustomSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ShadowDecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LeftLegDecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RightLegDecalMaterial;
    
public:
    UIGS_DecalContactShadowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateShadowRotation();
    
    UFUNCTION(BlueprintCallable)
    void SetShadowVisible(bool inVisible);
    
    UFUNCTION(BlueprintCallable)
    void InitShadowParameters(float InRadius, float inWidthScale);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitDefaultDecalSettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitComponent();
    
    UFUNCTION(BlueprintCallable)
    void InitAttachment(float inOffset);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraFadeMaterialParameter(bool Enabled);
    
};

