#include<vector>
#include<tuple>
#include <algorithm> 
#include<numeric>
#include<iostream>
using namespace std;
class Solution{
public:
	typedef tuple<int,int,int,int,vector<int>> Testcase_type;
	vector<Testcase_type> test_case;
public:
	void get_input(){
		int temp_n,temp_m,temp_l,temp_r;
		vector<int> temp_vector;
		while(cin>>temp_n&&temp_n!=0){
			cin>>temp_m>>temp_l>>temp_r;
			temp_vector.resize(temp_m);
			for(auto& it:temp_vector)
				cin>>it;
			test_case.push_back(make_tuple(temp_n, temp_m, temp_l, temp_r, temp_vector));
		}
	}
	float get_prob(Testcase_type one_case) {
		int m = get<0>(one_case);
		int n = get<1>(one_case);
		int l = get<2>(one_case);
		int r = get<3>(one_case);
		vector<int> steps = get<4>(one_case);
		vector<float> buffer_a(m);
		vector<float> buffer_b(m);
		buffer_a[0] = 1;
		for (int step = 0; step < n; step++) {
			for (int i = 0; i < m; i++) {
				int forward = i + steps[step] >= m ? i + steps[step] - m : i + steps[step];
				int backward = i - steps[step] < 0 ? i - steps[step] + m : i - steps[step];
				buffer_b[forward] += buffer_a[i] * 0.5;
				buffer_b[backward] += buffer_a[i] * 0.5;
			}
			swap(buffer_a, buffer_b);
			buffer_b.clear();
		}
		float sum = accumulate(buffer_a.begin() + l - 1, buffer_a.begin()+r , 0.);
		return sum;
	}
};