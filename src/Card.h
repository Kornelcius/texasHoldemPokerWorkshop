#pragma once

namespace texasHolderPoker
{

enum class Color
{
    Hearts = 0,
    Diamonds = 1,
    Spades = 2,
    Clubs = 3,
};

enum class Figure
{
    Ace = 0,
    Two = 1,
    Three = 2,
    Four = 3,
    Five = 4,
    Six = 5,
    Seven = 6,
    Eight = 7,
    Nine = 8,
    Ten = 9,
    Jack = 10,
    Queen = 11,
    King = 12,
};

struct Card
{
    Figure figure;
    Color color;
};

} // namespace texasHolderPoker
