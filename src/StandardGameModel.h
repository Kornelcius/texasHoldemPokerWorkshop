#pragma once

#include "IGameModel.h"
#include "IHandComparator.h"
#include "IPlayer.h"

class StandardGameModel : texasHolderPoker::IGameModel {

public: //from IGameModel
    void startGame(const texasHolderPoker::GameSettings &gameSettings) override;

    texasHolderPoker::RoundSetup startRound(const std::vector<texasHolderPoker::Card> &deck) override;

    bool setCurrentPlayerDecision(const texasHolderPoker::Decision &decision) override;

    texasHolderPoker::RoundPhase getCurrentRoundPhase() override;

    int getCurrentPlayer() const override;

    texasHolderPoker::Hand getPlayerHand(int playerNumber) const override;

    std::vector<int> getPlayersMoney() const override;

    int getLastWinningPlayer() const override;

    std::vector<texasHolderPoker::Card> getShownCards() const override;

    bool isGameEnded() const override;

    int getCurrentBet() const override;

private:
    int currentBet = 0;
    bool gameEnded = false;

};


