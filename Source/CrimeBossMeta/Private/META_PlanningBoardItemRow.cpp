#include "META_PlanningBoardItemRow.h"

FMETA_PlanningBoardItemRow::FMETA_PlanningBoardItemRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).IsVisualOnly = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).AudioMessageTag, 0)) = NAME_None;
    (*this).Missions.Empty();
    (*this).StaticMesh = nullptr;
    (*this).Connections.Empty();
    (*this).PositionX = 0.000000000e+00f;
    (*this).PositionY = 0.000000000e+00f;
    (*this).ZoomOffset = 0.000000000e+00f;
}

