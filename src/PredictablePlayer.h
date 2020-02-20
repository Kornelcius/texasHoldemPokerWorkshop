#pragma once

#include "IPlayer.h"
#include "IGameView.h"
#include "Card.h"
#include "Hand.h"

namespace texasHolderPoker {
    class PredictablePlayer : public IPlayer, public IGameView {
    public: //from IView
        void onPlayerDecision(int playerNumber, const Decision &decision) override;

        void onCardsShow(const std::vector<Card> &showCards) override;

        void onGameStart(const GameSettings &gameSettings) override;

        void onGameEnd(int winningPlayer) override;

        void onRoundStart(const RoundSetup &roundSetup) override;

        void onRoundEnd(const RoundResult &roundResult) override;

    public: // from IPlayer
        void onRoundStarted(int moneyCount, const Hand &hand) override;

        Decision getDecision(int requiredMoney) override;

    private:
        int money = 5000;
        Hand hand;
    };
}