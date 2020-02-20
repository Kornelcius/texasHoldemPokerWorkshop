#include <gtest/gtest.h>

#include <Card.h>
#include <StandardDeckShuffler.h>
#include  <PredictablePlayer.h>

namespace texasHolderPoker::test {

    TEST(ExampleTestSuite, ExampleTest) {
        // test if we link properly to testing lib
        Card card;
        StandardDeckShuffler deckShuffled;

        const auto deck = deckShuffled.shuffleDeck();

        EXPECT_EQ(deck.size(), 52);

    }


    TEST(TestRandomPlayer, PlayerRaise) {

        PredictablePlayer playerRandom1;

        auto dec = playerRandom1.getDecision(6000);
        EXPECT_EQ(dec.decisionKind, DecisionKind::Fold);
        EXPECT_EQ(dec.money, 0);

    }

    TEST(TestRandomPlayer2, PlayerCall) {

        PredictablePlayer playerRandom1;

        auto dec = playerRandom1.getDecision(5000);
        EXPECT_EQ(dec.decisionKind, DecisionKind::Call);
        EXPECT_EQ(dec.money, 5000);

    }

    TEST(TestRandomPlayer3, PlayerRaise) {

        PredictablePlayer playerRandom1;

        auto dec = playerRandom1.getDecision(1000);
        EXPECT_EQ(dec.decisionKind, DecisionKind::Raise);
        EXPECT_EQ(dec.money, 2000);

    }


} // namespace texasHolderPoker::test
