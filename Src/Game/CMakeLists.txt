add_library(
    Game
    Game.cpp
    GameState.cpp
)
target_link_libraries(Game Balagan)
target_include_directories(Game PUBLIC . ${BALAGAN_INCLUDES} )

