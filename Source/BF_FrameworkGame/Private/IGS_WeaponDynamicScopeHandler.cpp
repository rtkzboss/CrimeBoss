#include "IGS_WeaponDynamicScopeHandler.h"
#include "ComponentInstanceDataCache.h"
#include "Materials/MaterialInstanceConstant.h"

UIGS_WeaponDynamicScopeHandler::UIGS_WeaponDynamicScopeHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen0(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_Scope.MI_PP_Scope"));
    (*this).ScopePostprocessMaterial = gen0.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen1(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_Scope_Vertical.MI_PP_Scope_Vertical"));
    (*this).ScopePostprocessVerticalMaterial = gen1.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen2(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_SniperScope.MI_PP_SniperScope"));
    (*this).SniperScopePostprocessMaterial = gen2.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen3(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_SniperScope_Vertical.MI_PP_SniperScope_Vertical"));
    (*this).SniperScopePostprocessVerticalMaterial = gen3.Object;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UIGS_WeaponDynamicScopeHandler::OnWeaponDestroyed(AActor* inDestroyed) {
}

void UIGS_WeaponDynamicScopeHandler::OnAimChanged_Implementation(bool inAim) {
}

void UIGS_WeaponDynamicScopeHandler::DisableAimPostprocess() const {
}


