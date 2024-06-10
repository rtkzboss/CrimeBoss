#include "ShoutScanData.h"

FShoutScanData::FShoutScanData() {
    auto& gen2090 = (*this).WillBeShoutChars;
    gen2090.Empty();
    auto& gen2091 = (*this).CanNotShoutChars;
    gen2091.Empty();
    (*this).HasImposibleToShoutCharacters = false;
    (*this).HasCharacterForHint = false;
}

