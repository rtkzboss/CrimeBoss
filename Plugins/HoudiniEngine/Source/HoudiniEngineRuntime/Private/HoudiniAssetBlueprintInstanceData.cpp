#include "HoudiniAssetBlueprintInstanceData.h"
#include "ComponentInstanceDataCache.h"

FHoudiniAssetBlueprintInstanceData::FHoudiniAssetBlueprintInstanceData() {
    (*this).HoudiniAsset = nullptr;
    (*this).AssetId = -1;
    (*this).AssetState = EHoudiniAssetState::None;
    (*this).SubAssetIndex = 4294967295;
    (*this).AssetCookCount = 0;
    (*this).bHasBeenLoaded = false;
    (*this).bHasBeenDuplicated = false;
    (*this).bPendingDelete = false;
    (*this).bRecookRequested = false;
    (*this).bRebuildRequested = false;
    (*this).bEnableCooking = true;
    (*this).bForceNeedUpdate = false;
    (*this).bLastCookSuccess = false;
    (*this).ComponentGUID.A = 0;
    (*this).ComponentGUID.B = 0;
    (*this).ComponentGUID.C = 0;
    (*this).ComponentGUID.D = 0;
    (*this).HapiGUID.A = 0;
    (*this).HapiGUID.B = 0;
    (*this).HapiGUID.C = 0;
    (*this).HapiGUID.D = 0;
    (*this).bRegisteredComponentTemplate = false;
    (*this).SourceName = TEXT("");
    auto& gen1595 = (*this).Inputs;
    gen1595.Empty();
}

