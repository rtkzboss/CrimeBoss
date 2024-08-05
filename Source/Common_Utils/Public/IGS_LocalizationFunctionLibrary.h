#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Fonts/SlateFontInfo.h"
#include "IGS_LocalizationParam.h"
#include "IGS_LocalizationFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_LocalizationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_LocalizationFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsTextLocalized(FText Text, FString& outErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FVector2D GetParameterPositionInLocalizedTextByKey(const FSlateFontInfo& Font, const FString& Namespace, const FString& Key, const FString& ParamName, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FVector2D GetParameterPositionInLocalizedText(const FSlateFontInfo& Font, FText Text, const FString& ParamName, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FVector2D GetParameterPositionInEvaluatedLocalizedText(const FSlateFontInfo& Font, FText Text, UPARAM(Ref) TArray<FIGS_LocalizationParam>& Params, const FString& ParamName, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FText GetEvaluatedLocalizedText(FText Text, UPARAM(Ref) TArray<FIGS_LocalizationParam>& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static FText ConvertTextToInvariant(const FText& Text);
    
};

