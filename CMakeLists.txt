cmake_minimum_required(VERSION 3.20)

set(GRASS_RENDERER_NAME grass_renderer)

project(
    ${GRASS_RENDERER_NAME}
    VERSION 0.1.0
    LANGUAGES CXX
)

add_subdirectory(thirdparty)

add_executable(
    ${GRASS_RENDERER_NAME}
)
target_link_libraries(
    ${GRASS_RENDERER_NAME} PUBLIC
    core_sample_framework
)
target_include_directories(
    ${GRASS_RENDERER_NAME} PUBLIC
    src/grass_renderer
)
set_target_properties(
    ${GRASS_RENDERER_NAME} PROPERTIES
    CXX_STANDARD 23
)

add_subdirectory(src)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${GRASS_RENDERER_NAME})

core_deploy_d3d12(D3D12)
