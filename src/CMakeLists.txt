project(TexasHoldemPokerLib)

set(CMAKE_CXX_STANDARD 17)

aux_source_directory(. SRC_FILES)

add_library(TexasHoldemPokerLib STATIC ${SRC_FILES} PredictablePlayer.cpp PredictablePlayer.h StandardDeckShuffler.cpp StandardDeckShuffler.h RandomPlayer.cpp RandomPlayer.h)

target_include_directories(TexasHoldemPokerLib INTERFACE .)

add_subdirectory(test)