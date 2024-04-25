#include "IGS_CrosshairSectionWidget.h"

UIGS_CrosshairSectionWidget::UIGS_CrosshairSectionWidget() {
    this->PlayerMovementComponent = NULL;
    this->PlayerWieldableHolder = NULL;
    this->ActiveWieldableActor = NULL;
    this->ActiveWieldableObject = NULL;
    this->ShowCrosshairSetting = EIGS_ShowCrosshairSetting::Full;
}









bool UIGS_CrosshairSectionWidget::IsAimingAtFriendly() const {
    return false;
}

bool UIGS_CrosshairSectionWidget::IsAimingAtEnemy() const {
    return false;
}


