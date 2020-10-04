cmake_minimum_required(VERSION 3.17)
project(C_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_test main.cpp test_stl/stl_test_1.cpp test_class.cpp test_class_virtual.cpp test_class_virtual_chongxie.cpp single_instance.cpp single_instance_2.cpp single_instance_3.cpp single_instance_lanhan.cpp thread.cpp thread_2.cpp wanmei_01.cpp wanmei_02.cpp meituan_lianxi_1.cpp meituan_01.cpp meituan_02.cpp wangyihuyu_01.cpp wangyihuyu_02.cpp test_for_class_size.cpp test_stl/stl_delete.cpp)
add_subdirectory(test_stl)

