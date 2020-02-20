#pragma once

#include "IPlayer.h"
#include "IGameView.h"
#include "Card.h"
#include "Hand.h"

class RandomPlayer : public texasHolderPoker::IPlayer, public texasHolderPoker::IGameView {

public: //from IPlayer
    void onRoundStarted(int moneyCount, const texasHolderPoker::Hand &hand) override;
    texasHolderPoker::Decision getDecision(int requiredMoney) override;

public: //from IGameView
    void onPlayerDecision(int playerNumber, const texasHolderPoker::Decision &decision) override;

    void onCardsShow(const std::vector<texasHolderPoker::Card> &showCards) override;

    void onGameStart(const texasHolderPoker::GameSettings &gameSettings) override;

    void onGameEnd(int winningPlayer) override;

    void onRoundStart(const texasHolderPoker::RoundSetup &roundSetup) override;

    void onRoundEnd(const texasHolderPoker::RoundResult &roundResult) override;
};


