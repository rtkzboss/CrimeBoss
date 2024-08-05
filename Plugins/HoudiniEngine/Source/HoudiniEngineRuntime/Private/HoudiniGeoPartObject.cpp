#include "HoudiniGeoPartObject.h"

FHoudiniGeoPartObject::FHoudiniGeoPartObject() {
    (*this).AssetId = -1;
    (*this).AssetName = TEXT("");
    (*this).ObjectId = -1;
    (*this).ObjectName = TEXT("");
    (*this).GeoId = -1;
    (*this).PartId = -1;
    (*this).PartName = TEXT("");
    (*this).bHasCustomPartName = false;
    (*this).SplitGroups.Empty();
    (*this).TransformMatrix = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).NodePath = TEXT("");
    (*this).Type = EHoudiniPartType::Invalid;
    (*this).InstancerType = EHoudiniInstancerType::Invalid;
    (*this).VolumeName = TEXT("");
    (*this).bHasEditLayers = false;
    (*this).VolumeLayerName = TEXT("");
    (*this).VolumeTileIndex = -1;
    (*this).bIsVisible = false;
    (*this).bIsEditable = false;
    (*this).bIsTemplated = false;
    (*this).bIsInstanced = false;
    (*this).bHasGeoChanged = true;
    (*this).bHasPartChanged = true;
    (*this).bHasTransformChanged = true;
    (*this).bHasMaterialsChanged = true;
    (*this).AllMeshSockets.Empty();
}

