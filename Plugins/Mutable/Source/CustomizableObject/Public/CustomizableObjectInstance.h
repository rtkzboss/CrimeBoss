#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "CustomizableObjectBoolParameterValue.h"
#include "CustomizableObjectFloatParameterValue.h"
#include "CustomizableObjectIntParameterValue.h"
#include "CustomizableObjectProjectorParameterValue.h"
#include "CustomizableObjectTextureParameterValue.h"
#include "CustomizableObjectVectorParameterValue.h"
#include "ECustomizableObjectProjectorType.h"
#include "IGS_CustomizationArchive.h"
#include "ObjectInstanceUpdatedDelegateDelegate.h"
#include "CustomizableObjectInstance.generated.h"

class UCustomizableInstancePrivateData;
class UCustomizableObject;
class UCustomizableObjectInstance;
class USkeletalMesh;
class UTexture2D;

UCLASS(Blueprintable)
class CUSTOMIZABLEOBJECT_API UCustomizableObjectInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableObject* CustomizableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectBoolParameterValue> BoolParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectIntParameterValue> IntParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectFloatParameterValue> FloatParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectTextureParameterValue> TextureParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectVectorParameterValue> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBuildParameterDecorations;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FObjectInstanceUpdatedDelegate UpdatedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkeletalMeshStatus;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomizableInstancePrivateData* PrivateData;
    
public:
    UCustomizableObjectInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterSelectedOption(const FString& VectorParamName, FLinearColor VectorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomValues();
    
    UFUNCTION(BlueprintCallable)
    void SetProjectorValue(const FString& ProjectorParamName, const FVector& Pos, const FVector& Direction, const FVector& Up, const FVector& Scale, float Angle, int32 RangeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIntParameterSelectedOption(const FString& ParamName, const FString& SelectedOptionName, int32 RangeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameterSelectedOption(const FString& FloatParamName, float FloatValue, int32 RangeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomizationFromArchive(FIGS_CustomizationArchive inArchive);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(const FString& StateName);
    
    UFUNCTION(BlueprintCallable)
    void SetColorParameterSelectedOption(const FString& ColorParamName, FLinearColor ColorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolParameterSelectedOption(const FString& BoolParamName, bool BoolValue);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveValueFromProjectorRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveValueFromIntRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveValueFromFloatRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParamMultidimensional(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParameterRelevant(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProjectorValue(const FString& ProjectorParamName, FVector& Pos, FVector& Direction, FVector& Up, FVector& Scale, float& Angle, ECustomizableObjectProjectorType& Type, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectorUp(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectorScale(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectorPosition(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECustomizableObjectProjectorType GetProjectorParameterType(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectorDirection(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectorAngle(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetParameterDescription(const FString& ParamName, int32 DescIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIntParameterSelectedOption(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatParameterSelectedOption(const FString& FloatParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_CustomizationArchive GetCustomizationArchive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColorParameterSelectedOption(const FString& ColorParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoolParameterSelectedOption(const FString& BoolParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindVectorParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindProjectorParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindIntParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindFloatParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindBoolParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CurrentParamRange(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable)
    UCustomizableObjectInstance* CloneStatic(UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    UCustomizableObjectInstance* Clone();
    
    UFUNCTION(BlueprintCallable)
    int32 AddValueToProjectorRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable)
    int32 AddValueToIntRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable)
    int32 AddValueToFloatRange(const FString& ParamName);
    
};

