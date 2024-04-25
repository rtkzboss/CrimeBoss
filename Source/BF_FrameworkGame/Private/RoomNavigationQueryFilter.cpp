#include "RoomNavigationQueryFilter.h"

URoomNavigationQueryFilter::URoomNavigationQueryFilter() {
    this->AllowedRoomSecurity = 0;
    this->CostMultiplier = 5.00f;
    this->IsActive = true;
    this->AllowedRoomSecurityBitMask = 0;
    this->AllowedTierBitMask = 0;
    this->AllowedBasicTypeBitMask = 0;
}


