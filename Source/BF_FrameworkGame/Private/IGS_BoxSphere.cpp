#include "IGS_BoxSphere.h"
#include "Components/SceneComponent.h"
#include "IGS_CustomBoxComponent.h"
#include "IGS_CustomSphereComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_BoxSphere::AIGS_BoxSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Shape = EIGS_BoxSphereShape::EBF_Box;
    this->bIsActive = true;
    this->SphereRadius = 40.00f;
    this->bGenerateOverlapEvents = true;
    this->Root = (USceneComponent*)RootComponent;
    this->bDisableShapeSelection = false;
    this->BoxCollisionComponent = CreateDefaultSubobject<UIGS_CustomBoxComponent>(TEXT("BoxCollision"));
    this->SphereCollisionComponent = CreateDefaultSubobject<UIGS_CustomSphereComponent>(TEXT("SphereCollision"));
    this->BoxCollisionComponent->SetupAttachment(RootComponent);
    this->SphereCollisionComponent->SetupAttachment(RootComponent);
}

void AIGS_BoxSphere::SetSphereRadius(float InSphereRadius) {
}

void AIGS_BoxSphere::SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) {
}

void AIGS_BoxSphere::SetBoxExtent(FVector InBoxExtent) {
}

void AIGS_BoxSphere::SetActive(bool Inactive) {
}

void AIGS_BoxSphere::OnRep_IsActive() {
}

void AIGS_BoxSphere::OnRep_ExtentOrRadius() {
}

bool AIGS_BoxSphere::IsInShape(FVector InLocation) const {
    return false;
}

bool AIGS_BoxSphere::IsActive() const {
    return false;
}

EIGS_BoxSphereShape AIGS_BoxSphere::GetShapeType() const {
    return EIGS_BoxSphereShape::EBF_Box;
}

bool AIGS_BoxSphere::GetGenerateOverlapEvents() const {
    return false;
}

UShapeComponent* AIGS_BoxSphere::GetCollisionComponent() const {
    return NULL;
}

void AIGS_BoxSphere::Deactivate() {
}

void AIGS_BoxSphere::Activate() {
}

void AIGS_BoxSphere::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_BoxSphere, bIsActive);
    DOREPLIFETIME(AIGS_BoxSphere, BoxExtent);
    DOREPLIFETIME(AIGS_BoxSphere, SphereRadius);
}


