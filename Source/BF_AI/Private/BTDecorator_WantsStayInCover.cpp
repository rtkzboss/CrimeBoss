#include "BTDecorator_WantsStayInCover.h"

UBTDecorator_WantsStayInCover::UBTDecorator_WantsStayInCover() {
    this->NodeName = TEXT("Want to stay in cover");
    this->RefreshTime = 0.10f;
    this->m_LastCover = NULL;
    this->CharacterData = NULL;
    this->ObjectStatus = NULL;
}


