#include "KantanCategoryChart.h"
#include "KantanCategoryStyleSet.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

UKantanCategoryChart::UKantanCategoryChart() {
    (*this).bAutoPerCategoryStyles = true;
    static ConstructorHelpers::FObjectFinder<UKantanCategoryStyleSet> gen77(TEXT("/KantanCharts/Style/CategoryStyles/DefaultCategoryStyleSet.DefaultCategoryStyleSet"));
    (*this).CategoryStyleSet = gen77.Object;
}

void UKantanCategoryChart::AddCategoryStyleOverride(FName CategoryId, FLinearColor Color) {
}


