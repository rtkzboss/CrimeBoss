#include "META_DetectiveDatabase.h"
#include "Templates/SubclassOf.h"

UMETA_DetectiveDatabase::UMETA_DetectiveDatabase() {
}

TArray<TSubclassOf<UMETA_DetectiveID>> UMETA_DetectiveDatabase::GetDetectivesIDs(UObject* inWCO) const {
    return TArray<TSubclassOf<UMETA_DetectiveID>>();
}

FMETA_DetectiveTableRow UMETA_DetectiveDatabase::GetDetectiveData(UObject* inWCO, TSubclassOf<UMETA_DetectiveID> inID, bool& outSucceeded) {
    return FMETA_DetectiveTableRow{};
}


