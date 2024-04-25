#include "IGS_HUDKantanDatasourceHolder.h"
#include "KantanSimpleCartesianDatasource.h"

UIGS_HUDKantanDatasourceHolder::UIGS_HUDKantanDatasourceHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PressureGraphDataSource = CreateDefaultSubobject<UKantanSimpleCartesianDatasource>(TEXT("PressureGraphDataSource"));
    this->PressureGraphCatId_Value = TEXT("KantanSimpleSeries__0");
    this->PressureGraphExpectedId_Value = TEXT("KantanSimpleSeries__1");
}


