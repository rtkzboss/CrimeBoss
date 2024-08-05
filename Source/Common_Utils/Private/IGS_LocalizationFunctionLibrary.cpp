#include "IGS_LocalizationFunctionLibrary.h"

UIGS_LocalizationFunctionLibrary::UIGS_LocalizationFunctionLibrary() {
}

bool UIGS_LocalizationFunctionLibrary::IsTextLocalized(FText Text, FString& outErrorMessage) {
    return false;
}

FVector2D UIGS_LocalizationFunctionLibrary::GetParameterPositionInLocalizedTextByKey(const FSlateFontInfo& Font, const FString& Namespace, const FString& Key, const FString& ParamName, bool& Success) {
    return FVector2D{};
}

FVector2D UIGS_LocalizationFunctionLibrary::GetParameterPositionInLocalizedText(const FSlateFontInfo& Font, FText Text, const FString& ParamName, bool& Success) {
    return FVector2D{};
}

FVector2D UIGS_LocalizationFunctionLibrary::GetParameterPositionInEvaluatedLocalizedText(const FSlateFontInfo& Font, FText Text, TArray<FIGS_LocalizationParam>& Params, const FString& ParamName, bool& Success) {
    return FVector2D{};
}

FText UIGS_LocalizationFunctionLibrary::GetEvaluatedLocalizedText(FText Text, TArray<FIGS_LocalizationParam>& Params) {
    return FText::GetEmpty();
}

FText UIGS_LocalizationFunctionLibrary::ConvertTextToInvariant(const FText& Text) {
    return FText::GetEmpty();
}


