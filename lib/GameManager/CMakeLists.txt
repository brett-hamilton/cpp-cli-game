add_library(GameManager)

target_sources(GameManager
  PUBLIC
    FILE_SET CXX_MODULES
    FILES
      GameManager.cppm
)

target_compile_features(GameManager PUBLIC cxx_std_23)

target_link_libraries(GameManager PUBLIC Deck)