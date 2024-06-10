#include "IGS_Quick_ChainPlayerCharacters.h"

FIGS_Quick_ChainPlayerCharacters::FIGS_Quick_ChainPlayerCharacters() {
    (*this).PlayerId = 0;
    auto& gen2405 = (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).UniquePlayerId, 0));
    gen2405.Empty();
    auto& gen2406 = (*this).Heisters;
    gen2406.Empty();
}

