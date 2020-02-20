#include "StandardDeckShuffler.h"
#include "Card.h"
#include <random>
#include <algorithm>

using namespace texasHolderPoker;

std::vector<Card> StandardDeckShuffler::shuffleDeck() {
    Card card;
    std::vector<Card> deck;

    for (auto i = 0; i <= 3; ++i) {
        for (auto j = 0; j <= 12; ++j) {
            card.figure = Figure(j);
            card.color = Color(i);
            deck.push_back(card);
        }
    }

    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());
    std::shuffle(deck.begin(), deck.end(), generator);


    return deck;
}
