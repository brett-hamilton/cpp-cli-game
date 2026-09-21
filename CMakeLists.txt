cmake_minimum_required(VERSION 3.23)

project(Game)

add_executable(Game)

target_sources(Game
  PRIVATE
    main.cpp
)

target_compile_features(Game PUBLIC cxx_std_23)