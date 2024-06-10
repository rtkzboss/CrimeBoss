#include "IGS_WeaponDynamicScopeHandler.h"
#include "ComponentInstanceDataCache.h"
#include "Materials/MaterialInstanceConstant.h"

UIGS_WeaponDynamicScopeHandler::UIGS_WeaponDynamicScopeHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen635(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_Scope.MI_PP_Scope"));
    (*this).ScopePostprocessMaterial = gen635.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen636(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_Scope_Vertical.MI_PP_Scope_Vertical"));
    (*this).ScopePostprocessVerticalMaterial = gen636.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen637(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_SniperScope.MI_PP_SniperScope"));
    (*this).SniperScopePostprocessMaterial = gen637.Object;
    static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> gen638(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/MI_PP_SniperScope_Vertical.MI_PP_SniperScope_Vertical"));
    (*this).SniperScopePostprocessVerticalMaterial = gen638.Object;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UIGS_WeaponDynamicScopeHandler::OnWeaponDestroyed(AActor* inDestroyed) {
}

void UIGS_WeaponDynamicScopeHandler::OnAimChanged_Implementation(bool inAim) {
}

void UIGS_WeaponDynamicScopeHandler::DisableAimPostprocess() const {
}


