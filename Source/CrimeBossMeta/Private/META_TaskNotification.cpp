#include "META_TaskNotification.h"

UMETA_TaskNotification::UMETA_TaskNotification() {
    this->m_Goal = NULL;
    this->m_Task = NULL;
}

void UMETA_TaskNotification::SetTaskAndGoal(UMETA_TaskCondition* inTask, UMETA_BaseGoal* inGoal) {
}

UMETA_TaskCondition* UMETA_TaskNotification::GetTask() const {
    return NULL;
}

UMETA_BaseGoal* UMETA_TaskNotification::GetGoal() const {
    return NULL;
}


