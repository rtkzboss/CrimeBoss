#include "HoudiniPDGAssetLink.h"

UHoudiniPDGAssetLink::UHoudiniPDGAssetLink() {
    (*this).AssetId = -1;
    (*this).SelectedTOPNetworkIndex = -1;
    (*this).bUseTOPNodeFilter = true;
    (*this).bUseTOPOutputFilter = true;
    (*this).TOPNodeFilter = TEXT("HE_");
    (*this).TOPOutputFilter = TEXT("HE_OUT_");
    (*this).BakeFolder.Path = TEXT("/Game/HoudiniEngine/Bake");
}


