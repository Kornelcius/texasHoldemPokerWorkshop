#pragma once

#include <vector>

namespace texasHolderPoker
{

struct Card;

class IHandComparator
{
public:
    /// Looks bests cards configuration for every player, compare them
    /// and returns player number with the best cards configuration
    /// \param playersCards players cards
    /// \param tableCards common cards shown on table
    /// \return number of winning player
    int getWinningPlayer(const std::vector<Hand>& playersCards,
                         const std::vector<Card> tableCards) = 0;
};

} // namespace texasHolderPoker
