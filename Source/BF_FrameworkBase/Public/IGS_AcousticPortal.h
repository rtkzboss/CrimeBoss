#pragma once
#include "CoreMinimal.h"
#include "AkAcousticPortal.h"
#include "EIGS_SignificanceValue.h"
#include "IGS_AcousticPortal.generated.h"

class UIGS_SignificanceComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_AcousticPortal : public AAkAcousticPortal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideShape;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOpened, meta=(AllowPrivateAccess=true))
    bool mR_IsOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOcclusionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SignificanceComponent* SignificanceComponent;
    
public:
    AIGS_AcousticPortal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostSignificance(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue);
    
};

