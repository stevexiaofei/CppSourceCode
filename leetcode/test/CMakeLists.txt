# 查找 GTest 库
#find_package(GTest REQUIRED)
# GTest 的头文件
include_directories(D:\\Project\\googletest-release-1.8.1\\googletest\\include)
add_executable(test_leetcode  test_my_class.cpp  test_mat.cpp  test_depth_first_visit.cpp test_beautiful_permutation.cpp test_mergeStone.cpp)
# 链接测试库
target_link_libraries( test_leetcode
        D:\\Project\\googletest-release-1.8.1\\build\\googlemock\\gtest\\Release\\gtest.lib
		D:\\Project\\googletest-release-1.8.1\\build\\googlemock\\gtest\\Release\\gtest_main.lib
		D:\\Project\\googletest-release-1.8.1\\build\\googlemock\\gtest\\Debug\\gtestd.lib
		D:\\Project\\googletest-release-1.8.1\\build\\googlemock\\gtest\\Debug\\gtest_maind.lib
        )
