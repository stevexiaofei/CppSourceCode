#include <gtest/gtest.h>
#include<iostream>
#include <rotatemat.hpp>
TEST(DISABLED_test_rotatemat, rotate_mat)
{
	Solution  so;
	int case1[] = {1,2,3,4,5,6,7,8,9};
	for (int i = 0; i < 9; i++) {
		std::cout << case1[i];
		if ((i + 1) % 3 == 0)
			std::cout << std::endl;
	}
	so.rotate_mat(case1, 3);
	for (int i = 0; i < 9; i++) {
		std::cout << case1[i];
		if((i+1)%3==0)
				std::cout<< std::endl;
	}
	int case2[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	for (int i = 0; i < 16; i++) {
		std::cout << case2[i];
		if ((i + 1) % 4 == 0)
			std::cout << std::endl;
	}
	so.rotate_mat(case2, 4);
	for (int i = 0; i < 16; i++) {
		std::cout << case2[i];
		if ((i + 1) % 4 == 0)
			std::cout << std::endl;
	}
	//ASSERT_TRUE(myClass.get_age() == 16) << "age is not 16";
}