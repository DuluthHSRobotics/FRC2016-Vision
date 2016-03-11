# Notice name prefix of this variable, set by CMake according
# to value given with "project()" in the root CMakeLists.txt.
include_directories(${FRCVision_SOURCE_DIR}/NetworkTables/include)

file(GLOB_RECURSE NetworkTables_SRC
    "*.h"
    "*.cpp"
)

# Disable JNI support
list(REMOVE_ITEM NetworkTables_SRC ${CMAKE_CURRENT_SOURCE_DIR}/NetworkTablesJNI.cpp)

add_library(NetworkTables ${NetworkTables_SRC})
