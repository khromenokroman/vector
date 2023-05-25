cmake_minimum_required(VERSION 3.5)

project(vector)

add_executable(${PROJECT_NAME}
    ${PROJECT_SOURCE_DIR}/src/main.cpp
)

#add_library(${PROJECT_NAME}_lib SHARED ${PROJECT_SOURCE_DIR}/lib/vector.cpp)

#target_include_directories(${PROJECT_NAME}_lib PUBLIC ${PROJECT_SOURCE_DIR}/lib)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

#target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}_lib)