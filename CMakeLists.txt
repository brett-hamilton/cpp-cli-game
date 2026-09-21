cmake_minimum_required(VERSION 3.28)

project(Game)

add_executable(Game)

target_sources(Game
  PRIVATE
    main.cpp
)

add_subdirectory(lib)

target_link_libraries(Game PRIVATE GameManager)

target_compile_features(Game PUBLIC cxx_std_23)
