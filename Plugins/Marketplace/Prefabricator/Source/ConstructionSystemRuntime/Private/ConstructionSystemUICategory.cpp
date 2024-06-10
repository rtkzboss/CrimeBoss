#include "ConstructionSystemUICategory.h"

FConstructionSystemUICategory::FConstructionSystemUICategory() {
    (*this).DisplayName = FText::FromString(TEXT(""));
    (*this).Icon = nullptr;
    auto& gen1619 = (*this).PrefabEntries;
    gen1619.Empty();
}

