#include "META_MainWidget.h"

UMETA_MainWidget::UMETA_MainWidget() {
    this->UIEventsManagerComponent = NULL;
    this->CrewManager = NULL;
    this->BlackmarketManager = NULL;
    this->FinanceManager = NULL;
    this->GoalsManager = NULL;
    this->JobsManager = NULL;
    this->StashManager = NULL;
    this->DailyManager = NULL;
    this->LevelActorsManagerComponent = NULL;
    this->MetaGameMode = NULL;
    this->MetaGameState = NULL;
}








void UMETA_MainWidget::OnGamemodeReady_Implementation() {
}


