find_package(GTest REQUIRED)
find_package(PythonLibs 2.7)

include_directories(${GTEST_INCLUDE_DIRS})

set(EXECUTABLE_OUTPUT_PATH "../bin")

add_executable(test_getCurCardNum test_getCurCardNum.cpp)
add_executable(test_dealCard test_dealCard.cpp)

target_link_libraries(test_getCurCardNum ${GTEST_LIBRARIES} pthread)
target_link_libraries(test_dealCard ${GTEST_LIBRARIES} pthread)

target_include_directories(test_getCurCardNum PRIVATE ${PYTHON_INCLUDE_DIRS})
target_include_directories(test_dealCard PRIVATE ${PYTHON_INCLUDE_DIRS})

target_link_libraries(test_getCurCardNum ${PYTHON_LIBRARIES})
target_link_libraries(test_dealCard ${PYTHON_LIBRARIES})
