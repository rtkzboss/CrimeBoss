#include "IGS_Quick_ChainPlayerCharacters.h"

FIGS_Quick_ChainPlayerCharacters::FIGS_Quick_ChainPlayerCharacters() {
    (*this).PlayerId = 0;
    (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).UniquePlayerId, 0)).Empty();
    (*this).Heisters.Empty();
}

