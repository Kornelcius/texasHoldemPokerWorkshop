#include <iostream>

#include <GameController.h>
#include <GameSettings.h>
#include <PredictablePlayer.h>
#include <RandomPlayer.h>

int main() {
    /* TASKS create:
     * - PredictablePlayer class inheriting IPlayer //DONE
     * - StandardGameModel class inheriting IGameModel, try to use IHandComparator class
     * - StandardDeckShuffler class inheriting IDeckShuffler //DONE
     * - ConsoleView class inheriting IViewClass //Grzesiek
     * - fill inform*** methods in GameController marked as TODO
     *
     * other options, create:
     * - AIPlayer - class with Artifical inteligence
     * - ConsolePlayer - class taking decisions from console //
     * - other view class
     * - other game model class, eg. NetworkGameModel
     */

    auto gameModel = std::make_unique<StandardGameModel>();
    texasHolderPoker::GameController gameController{std::move(gameModel)};
    auto consoleView = std::make_shared<ConsoleView>();

    auto player1 = std::make_shared<texasHolderPoker::PredictablePlayer>();
    auto player2 = std::make_shared<RandomPlayer>();

    gameController.addPlayer(player1);
    gameController.addView(player1);

    gameController.addPlayer(player2);
    gameController.addView(player2);

    gameController.addView(consoleView);
    gameController.addPlayer(std::make_shared<texasHolderPoker::PredictablePlayer>());
    gameController.addPlayer(std::make_shared<texasHolderPoker::PredictablePlayer>());
    gameController.addPlayer(std::make_shared<texasHolderPoker::PredictablePlayer>());
    texasHolderPoker::GameMoneyRules rules;
    gameController.startGame(rules);


    return 0;
}