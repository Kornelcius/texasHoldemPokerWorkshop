#pragma once

#include "IPlayer.h"

using namespace texasHolderPoker;

class RandomPlayer : IPlayer {
    void onRoundStarted(int moneyCount, const Hand &hand) override;

    Decision getDecision(int requiredMoney) override;

};

void RandomPlayer::onRoundStarted(int moneyCount, const Hand &hand) {

}

Decision RandomPlayer::getDecision(int requiredMoney) {
    return Decision();
}
