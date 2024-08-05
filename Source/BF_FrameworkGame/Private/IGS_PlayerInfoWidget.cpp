#include "IGS_PlayerInfoWidget.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"

UIGS_PlayerInfoWidget::UIGS_PlayerInfoWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PlayerName = FText::FromString(TEXT("Player"));
    (*this).HeisterNumber = -1;
    (*this).DebugEditorName = FText::FromString(TEXT("Server"));
}






