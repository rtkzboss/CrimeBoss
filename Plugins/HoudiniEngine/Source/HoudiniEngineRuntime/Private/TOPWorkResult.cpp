#include "TOPWorkResult.h"

FTOPWorkResult::FTOPWorkResult() {
    (*this).WorkItemIndex = -1;
    (*this).WorkItemID = -1;
    auto& gen1609 = (*this).ResultObjects;
    gen1609.Empty();
}

