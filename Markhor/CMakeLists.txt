add_library(Markhor SHARED
    src/Markhor/Application.cpp
)

target_include_directories(Markhor
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(Markhor PUBLIC cxx_std_23)

set_target_properties(Markhor PROPERTIES
    OUTPUT_NAME "Markhor"
)
