#include "META_TradeVendorTableRow.h"

FMETA_TradeVendorTableRow::FMETA_TradeVendorTableRow() {
    (*this).ID = EMETA_TradeVendor::UNDEFINED;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Image = nullptr;
}

