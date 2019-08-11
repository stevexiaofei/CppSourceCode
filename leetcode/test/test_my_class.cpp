#include <gtest/gtest.h>
#include <my.hpp>
#include <hdu4576.hpp>
TEST(test_my_class, get_age)
{
    my_class myClass("Joel", 21);
    ASSERT_TRUE(myClass.get_age() == 16) << "age is not 16";
}

TEST(test_my_class, get_name)
{
    my_class myClass("Joel", 21);
    ASSERT_EQ(myClass.get_name(), "Joel") << "name is not Joel";
}
TEST(DISABLED_test_hdu4576, get_input) {
	using Testcase_type = typename Solution::Testcase_type;
	Solution so = Solution();
	so.get_input();
	for (auto&it : so.test_case) {
		//cout << get<0>(it) << get<1>(it) << get<2>(it) << get<3>(it) << endl;
		vector<int> temp_vector = get<4>(it);
		float res = so.get_prob(it);
		cout << res << endl;
	}
}
