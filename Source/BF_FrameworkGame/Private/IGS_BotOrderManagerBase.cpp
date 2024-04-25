#include "IGS_BotOrderManagerBase.h"

UIGS_BotOrderManagerBase::UIGS_BotOrderManagerBase() {
}

EIGS_BotOrderResult UIGS_BotOrderManagerBase::GetLastGetBestActionForResult() const {
    return EIGS_BotOrderResult::Unknown;
}

FIGS_BotOrderAction UIGS_BotOrderManagerBase::GetBestActionFor(AIGS_GameCharacterFramework*& inInstigator, const AIGS_GameCharacterFramework* inBot, UObject* inObject, const FVector InLocation, const EIGS_BotOrderActionSource inSource) {
    return FIGS_BotOrderAction{};
}

TArray<FIGS_BotOrderAction> UIGS_BotOrderManagerBase::GetActions(AIGS_GameCharacterFramework*& inInstigator, const AIGS_GameCharacterFramework* inBot, UObject* inObject) {
    return TArray<FIGS_BotOrderAction>();
}

bool UIGS_BotOrderManagerBase::DoActions(const TArray<FIGS_BotOrderAction>& inActions, const bool inAllMustSucceed) {
    return false;
}

bool UIGS_BotOrderManagerBase::DoAction(FIGS_BotOrderAction& InAction) {
    return false;
}

TArray<FIGS_BotOrderAction> UIGS_BotOrderManagerBase::CreateBotOrderActions(const UObject* inWCO, const EIGS_BotCommandDefinition inType, AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inBot, UObject* inObject, const FVector InLocation) {
    return TArray<FIGS_BotOrderAction>();
}

FIGS_BotOrderAction UIGS_BotOrderManagerBase::CreateBotOrderAction(const UObject* inWCO, const EIGS_BotCommandDefinition inType, AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inBot, UObject* inObject, const FVector InLocation) {
    return FIGS_BotOrderAction{};
}


