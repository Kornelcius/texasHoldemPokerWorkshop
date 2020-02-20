#include "RandomPlayer.h"
#include <random>
#include <algorithm>

void RandomPlayer::onRoundStarted(int moneyCount, const texasHolderPoker::Hand &hand) {

}

texasHolderPoker::Decision RandomPlayer::getDecision(int requiredMoney) {
    texasHolderPoker::Decision dec;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);
    auto intInRange1_3 = dis(gen);

    if (intInRange1_3 == 1){
        dec.decisionKind = texasHolderPoker::DecisionKind::Raise;
        dec.money = 2*requiredMoney;
    }
    else if (intInRange1_3 == 2){
        dec.decisionKind = texasHolderPoker::DecisionKind::Call;
        dec.money = requiredMoney;
    }
    else if (intInRange1_3 == 3){
        dec.decisionKind = texasHolderPoker::DecisionKind::Fold;
        dec.money = 0;
    }

    return dec;
}

void RandomPlayer::onPlayerDecision(int playerNumber, const texasHolderPoker::Decision &decision) {

}

void RandomPlayer::onCardsShow(const std::vector<texasHolderPoker::Card>& showCards) {

}

void RandomPlayer::onGameStart(const texasHolderPoker::GameSettings &gameSettings) {

}

void RandomPlayer::onGameEnd(int winningPlayer) {

}

void RandomPlayer::onRoundStart(const texasHolderPoker::RoundSetup &roundSetup) {

}

void RandomPlayer::onRoundEnd(const texasHolderPoker::RoundResult &roundResult) {

}
