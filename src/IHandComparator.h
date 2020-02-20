#pragma once

#include <vector>

namespace texasHolderPoker
{

struct Card;
struct Hand;

class IHandComparator
{
public:
    /// Looks bests cards configuration for every player, compare them
    /// and returns player number with the best cards configuration
    /// \param playersCards players cards
    /// \param tableCards common cards shown on table
    /// \return number of winning player
    virtual int getWinningPlayer(const std::vector<Hand>& hand,
                         const std::vector<Card> tableCards) = 0;
};

} // namespace texasHolderPoker
