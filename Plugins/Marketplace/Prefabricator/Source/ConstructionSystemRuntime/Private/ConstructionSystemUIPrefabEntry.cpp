#include "ConstructionSystemUIPrefabEntry.h"

FConstructionSystemUIPrefabEntry::FConstructionSystemUIPrefabEntry() {
    (*this).DisplayName = FText::FromString(TEXT(""));
    (*this).Tooltip = FText::FromString(TEXT(""));
    (*this).Icon = nullptr;
    (*this).Prefab = nullptr;
}

