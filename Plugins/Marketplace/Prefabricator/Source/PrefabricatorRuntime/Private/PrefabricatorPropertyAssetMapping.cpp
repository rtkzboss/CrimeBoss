#include "PrefabricatorPropertyAssetMapping.h"

FPrefabricatorPropertyAssetMapping::FPrefabricatorPropertyAssetMapping() {
    (*this).AssetReference = FSoftObjectPath();
    (*this).AssetClassName = TEXT("");
    (*this).AssetObjectPath = NAME_None;
    (*this).bUseQuotes = false;
}

