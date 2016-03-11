find_package(OpenCV REQUIRED)

#include_directories(${FRCVision_SOURCE_DIR}/Vision/include)
# I assume you want to use LibProject as a library in MainProject.
include_directories(${FRCVision_SOURCE_DIR}/NetworkTables/include)
link_directories(${FRCVision_SOURCE_DIR}/NetworkTables/src)

add_executable(Vision main.cpp)
target_link_libraries(Vision NetworkTables ${OpenCV_LIBS})

set_target_properties(
    Vision
    PROPERTIES
    OUTPUT_NAME FRCVision)


