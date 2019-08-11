#include <gtest/gtest.h>
#include<iostream>
#include <beautiful_permutation.hpp>

TEST(DISABLED_test_beautiful_permutation, count_beautiful_permutation)
{
	Solution so;
	int count;
	count= so.count_beautiful_permutation(2);
	std::cout << count << std::endl;
	ASSERT_EQ(count, 2) << "count_beautiful_permutation fail\n";
}