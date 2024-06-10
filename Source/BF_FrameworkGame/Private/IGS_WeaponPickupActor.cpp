#include "IGS_WeaponPickupActor.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EIGS_TeamSideEnum.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_WeaponPickupActor::AIGS_WeaponPickupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).WeaponSkin = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WeaponSkinTag, 0)) = TEXT("ID.Skins.Weapons.Default.Base");
    (*this).DefaultMesh = nullptr;
    (*this).WeaponPickupSkelMeshComp = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("RootComp"));
    (*this).SightModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SightModMesh"));
    (*this).VisibilityModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibilityModMesh"));
    (*this).BarrelModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelModMesh"));
    (*this).GripModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GripModMesh"));
    (*this).MagazineModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagazineModMesh"));
    (*this).StockModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StockModMesh"));
    auto& gen0 = (*this).WeaponModsArray;
    gen0.Empty();
    gen0.AddDefaulted(6);
    (*this).mR_IsVisible = true;
    (*this).PickupMeshComp = (UPrimitiveComponent*)WeaponPickupSkelMeshComp;
    (*this).SceneRoot = (USceneComponent*)WeaponPickupSkelMeshComp;
    (*this).RootComponent = (USceneComponent*)WeaponPickupSkelMeshComp;
    (*this).SightModMesh->SetupAttachment((*this).WeaponPickupSkelMeshComp);
    (*this).VisibilityModMesh->SetupAttachment((*this).WeaponPickupSkelMeshComp);
    (*this).BarrelModMesh->SetupAttachment((*this).WeaponPickupSkelMeshComp);
    (*this).GripModMesh->SetupAttachment((*this).WeaponPickupSkelMeshComp);
    (*this).MagazineModMesh->SetupAttachment((*this).WeaponPickupSkelMeshComp);
    (*this).StockModMesh->SetupAttachment((*this).WeaponPickupSkelMeshComp);
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


