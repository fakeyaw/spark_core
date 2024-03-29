cmake_minimum_required(VERSION 3.18.1)

if (NOT DEFINED MODULE_NAME)
    message(FATAL_ERROR "MODULE_NAME is not set")
else ()
    project(${MODULE_NAME})
endif ()

set(DobbyHome Dobby)
include_directories(
        ${DobbyHome}/include
)
macro(SET_OPTION option value)
    set(${option} ${value} CACHE INTERNAL "" FORCE)
endmacro()
SET_OPTION(DOBBY_DEBUG OFF)
SET_OPTION(DOBBY_GENERATE_SHARED OFF)
add_subdirectory(${DobbyHome} dobby)

message("Build type: ${CMAKE_BUILD_TYPE}")

set(CMAKE_CXX_STANDARD 20)

set(LINKER_FLAGS "-ffixed-x18 -Wl,--hash-style=both")
set(C_FLAGS "-w -s -Wno-error=format-security -fvisibility=hidden -Werror -std=c++17")
set(CXX_FLAGS "${CXX_FLAGS} -fno-exceptions -fno-rtti")

if (NOT CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(C_FLAGS "${C_FLAGS} -O2 -fvisibility=hidden -fvisibility-inlines-hidden -Wno-error=c++11-narrowing -fpermissive -Wall -fexceptions -Werror,-Wformat-security]")
    set(LINKER_FLAGS "${LINKER_FLAGS} -Werror=format -fdata-sections  -ffunction-sections -fvisibility=hidden -fvisibility-inlines-hidden -Wl,-exclude-libs,ALL -Wl,--gc-sections -Wl,--strip-all ")
else ()
    set(C_FLAGS "${C_FLAGS} -O2 -fvisibility=hidden -fvisibility-inlines-hidden -Wno-error=c++11-narrowing -fpermissive -Wall -fexceptions")
    set(LINKER_FLAGS "${LINKER_FLAGS} -Werror=format -fdata-sections -ffunction-sections -fvisibility=hidden -fvisibility-inlines-hidden -Wl,-exclude-libs,ALL -Wl,--gc-sections -Wl,--strip-all ")
endif ()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${C_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${C_FLAGS} ${CXX_FLAGS}")

set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} ${LINKER_FLAGS}")
set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} ${LINKER_FLAGS}")

add_library(${MODULE_NAME} SHARED main.cpp hook.cpp     ImGui/imgui.cpp
        ImGui/imgui_impl_android.cpp
        ImGui/imgui_impl_opengl3.cpp
        ImGui/imgui_tables.cpp
        ImGui/imgui_widgets.cpp
        ImGui/imgui_demo.cpp
        ImGui/imgui_draw.cpp)
target_link_libraries(${MODULE_NAME} log dobby GLESv3 GLESv2 EGL android z)

if (NOT CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_custom_command(TARGET ${MODULE_NAME} POST_BUILD
            COMMAND ${CMAKE_STRIP} --strip-all --remove-section=.comment "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/lib${MODULE_NAME}.so")
endif ()
