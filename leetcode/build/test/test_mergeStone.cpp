#include <gtest/gtest.h>
#include"mergeStone.hpp"
#include<iostream>
using namespace std;
TEST(test_mergestone, merge_stone_v1) {
	Solution so;
	so.get_input();
	int cost=so.merge_stone_v1();
	cout << "cost: "<<cost << endl;
	cost = so.merge_stone_v2();
	cout << "cost: " << cost << endl;
}