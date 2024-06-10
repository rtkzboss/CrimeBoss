#include "AkExternalSourceInfo.h"

FAkExternalSourceInfo::FAkExternalSourceInfo() {
    (*this).ExternalSrcName = TEXT("");
    (*this).CodecID = AkCodecId::None;
    (*this).Filename = TEXT("");
    (*this).ExternalSourceAsset = nullptr;
    (*this).IsStreamed = true;
}

