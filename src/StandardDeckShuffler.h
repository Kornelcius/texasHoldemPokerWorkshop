#pragma once
#include "IDeckShuffler.h"
#include <iostream>

using namespace texasHolderPoker;

class StandardDeckShuffler : public IDeckShuffler {

public:
    std::vector<Card> shuffleDeck() override;

private:

};
