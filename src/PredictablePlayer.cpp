#include "PredictablePlayer.h"
#include "Decision.h"
#include <cmath>
#include <vector>

namespace texasHolderPoker {


    void PredictablePlayer::onRoundStarted(int moneyCount, const Hand &hand) {
    this->money = moneyCount;
    this->hand = hand;
    }

    Decision PredictablePlayer::getDecision(int requiredMoney) {
        Decision dec;
        if (requiredMoney < money) {
            dec.decisionKind = DecisionKind::Raise;
            dec.money = 2 * requiredMoney;
        } else if (requiredMoney == money) {
            dec.decisionKind = DecisionKind::Call;
            dec.money = requiredMoney;
        } else {
            dec.decisionKind = DecisionKind::Fold;
            dec.money = 0;
        }
        return dec;
    }

    void PredictablePlayer::onPlayerDecision(int playerNumber, const Decision &decision) {

    }

    void PredictablePlayer::onCardsShow(const std::vector<Card> &showCards) {

    }

    void PredictablePlayer::onGameStart(const GameSettings &gameSettings) {

    }

    void PredictablePlayer::onGameEnd(int winningPlayer) {

    }

    void PredictablePlayer::onRoundStart(const RoundSetup &roundSetup) {

    }

    void PredictablePlayer::onRoundEnd(const RoundResult &roundResult) {

    }
}




