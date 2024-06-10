#include "ShoutScanData.h"

FShoutScanData::FShoutScanData() {
    (*this).WillBeShoutChars.Empty();
    (*this).CanNotShoutChars.Empty();
    (*this).HasImposibleToShoutCharacters = false;
    (*this).HasCharacterForHint = false;
}

