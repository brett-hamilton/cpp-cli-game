add_library(Deck)

target_sources(Deck
  PUBLIC
    FILE_SET CXX_MODULES
    FILES
      Deck.cppm
      Card.cppm
)

target_compile_features(Deck PUBLIC cxx_std_23)
