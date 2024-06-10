#include "ConstructionSystemUICategory.h"

FConstructionSystemUICategory::FConstructionSystemUICategory() {
    (*this).DisplayName = FText::FromString(TEXT(""));
    (*this).Icon = nullptr;
    (*this).PrefabEntries.Empty();
}

