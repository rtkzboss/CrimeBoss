#include "SimpleBarChart.h"
#include "EKantanBarChartOrientation.h"
#include "EKantanBarLabelPosition.h"
#include "EKantanBarValueExtents.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

USimpleBarChart::USimpleBarChart() {
}

void USimpleBarChart::BP_UpdateCategoryValue(FName ID, float Value, bool& bSuccess) {
}

void USimpleBarChart::BP_RemoveCategory(FName ID, bool& bSuccess) {
}

void USimpleBarChart::BP_RemoveAllCategories() {
}

void USimpleBarChart::BP_AddCategoryWithId(FName ID, FText Name, bool& bSuccess) {
}

void USimpleBarChart::BP_AddCategory(FText Name, FName& CatId) {
}


