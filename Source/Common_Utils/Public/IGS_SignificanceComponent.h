#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EIGS_SignificanceValue.h"
#include "IGS_PostSignificanceDelegateDelegate.h"
#include "IGS_SignificanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMMON_UTILS_API UIGS_SignificanceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PostSignificanceDelegate OnPostSignificance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SignificanceValue CurrentSignificanceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventOnlyOnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, EIGS_SignificanceValue> SignificanceDistanceMap;
    
public:
    UIGS_SignificanceComponent(const FObjectInitializer& ObjectInitializer);

};

