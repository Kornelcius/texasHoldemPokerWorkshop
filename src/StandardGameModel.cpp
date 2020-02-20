#include "StandardGameModel.h"

void StandardGameModel::startGame(const texasHolderPoker::GameSettings &gameSettings) {

}

texasHolderPoker::RoundSetup StandardGameModel::startRound(const std::vector<texasHolderPoker::Card> &deck) {
    return texasHolderPoker::RoundSetup();
}

bool StandardGameModel::setCurrentPlayerDecision(const texasHolderPoker::Decision &decision) {
    return false;
}

texasHolderPoker::RoundPhase StandardGameModel::getCurrentRoundPhase() {
    return texasHolderPoker::RoundPhase();
}

int StandardGameModel::getCurrentPlayer() const {
    return 0;
}

texasHolderPoker::Hand StandardGameModel::getPlayerHand(int playerNumber) const {
    return texasHolderPoker::Hand();
}

std::vector<int> StandardGameModel::getPlayersMoney() const {
    return std::vector<int>();
}

int StandardGameModel::getLastWinningPlayer() const {
    return 0;
}

std::vector<texasHolderPoker::Card> StandardGameModel::getShownCards() const {
    return std::vector<texasHolderPoker::Card>();
}

bool StandardGameModel::isGameEnded() const {
    return gameEnded;
}

int StandardGameModel::getCurrentBet() const {
    return currentBet;
}
