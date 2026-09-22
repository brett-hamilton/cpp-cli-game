add_library(Utilities)

target_sources(Utilities
  PUBLIC
    FILE_SET CXX_MODULES
    FILES
      Utilities.cppm
)

target_compile_features(Utilities PUBLIC cxx_std_23)
