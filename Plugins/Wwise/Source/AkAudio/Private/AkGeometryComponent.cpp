#include "AkGeometryComponent.h"
#include "ComponentInstanceDataCache.h"

UAkGeometryComponent::UAkGeometryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MeshType = AkMeshType::CollisionMesh;
    (*this).WeldingThreshold = 1.000000047e-03f;
    (*this).bEnableDiffraction = true;
}

void UAkGeometryComponent::UpdateGeometry() {
}

void UAkGeometryComponent::SendGeometry() {
}

void UAkGeometryComponent::RemoveGeometry() {
}

void UAkGeometryComponent::ConvertMesh() {
}


