cmake_minimum_required(VERSION 3.17)
project(C_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_test main.cpp test_stl/stl_test_1.cpp test_class.cpp test_class_virtual.cpp test_class_virtual_chongxie.cpp single_instance.cpp single_instance_2.cpp single_instance_3.cpp single_instance_lanhan.cpp thread.cpp thread_2.cpp wanmei_01.cpp wanmei_02.cpp meituan_lianxi_1.cpp)
add_subdirectory(test_stl)

