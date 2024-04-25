#include "IGS_WeaponPickupActor.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_WeaponPickupActor::AIGS_WeaponPickupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("RootComp"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    this->InteractiveComponent = NULL;
    this->OutlineComponent = NULL;
    this->PingableComponent = NULL;
    this->R_WeaponClassToAdd = NULL;
    this->WeaponPlatformID = NULL;
    this->LoadedWeaponSkin = NULL;
    this->LoadedWeaponSpecificSkin = NULL;
    this->LoadedWeaponMesh = NULL;
    this->WeaponPickupSkelMeshComp = (USkeletalMeshComponentBudgeted*)RootComponent;
    this->SightModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SightModMesh"));
    this->VisibilityModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibilityModMesh"));
    this->BarrelModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelModMesh"));
    this->GripModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GripModMesh"));
    this->MagazineModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagazineModMesh"));
    this->StockModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StockModMesh"));
    this->WeaponModsArray.AddDefaulted(6);
    this->mR_IsVisible = true;
    this->SightModMesh->SetupAttachment(RootComponent);
    this->VisibilityModMesh->SetupAttachment(RootComponent);
    this->BarrelModMesh->SetupAttachment(RootComponent);
    this->GripModMesh->SetupAttachment(RootComponent);
    this->MagazineModMesh->SetupAttachment(RootComponent);
    this->StockModMesh->SetupAttachment(RootComponent);
}

void AIGS_WeaponPickupActor::Setup(const TSubclassOf<UMETA_WeaponInventoryObject>& inItemClass, const TSoftObjectPtr<UIGS_WeaponSkinData> inSkin) {
}

void AIGS_WeaponPickupActor::OnRep_WeaponSkin() {
}

void AIGS_WeaponPickupActor::OnRep_WeaponClass() {
}

void AIGS_WeaponPickupActor::OnRep_UniversalData() {
}

void AIGS_WeaponPickupActor::OnRep_IsVisible() {
}

bool AIGS_WeaponPickupActor::DoesItemHaveProperty(EIGS_ItemPropertyFlags inItemFlag) {
    return false;
}

void AIGS_WeaponPickupActor::ApplyUniversalData_Implementation(FIGS_InventoryObjectUniversalData inUniversalData) {
}

void AIGS_WeaponPickupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_WeaponPickupActor, R_WeaponClassToAdd);
    DOREPLIFETIME(AIGS_WeaponPickupActor, R_UniversalData);
    DOREPLIFETIME(AIGS_WeaponPickupActor, WeaponSkin);
    DOREPLIFETIME(AIGS_WeaponPickupActor, mR_IsVisible);
}


