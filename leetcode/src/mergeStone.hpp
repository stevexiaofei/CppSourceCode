#include<queue>
#include<iostream>
#include<functional>
#include <limits>
#include<vector>
using namespace std;
class Solution{
public:
	vector<int > data;
	void get_input(){
		int n;
		cin>>n;
		assert(n>=0);
		data.resize(n);
		for(auto&it:data)
			cin>>it;
	}
	int merge_stone_v1(){
		priority_queue<int,vector<int>,greater<int> >q;
		int sum=0;
		for(auto it:data)
			q.push(it);
		while(q.size()>1){
			int min1=q.top();
			q.pop();
			int min2=q.top();
			q.pop();
			sum +=min1+min2;
			q.push(min1 + min2);
		}
		return sum;
	}
	int merge_stone_v2() {
		int size = data.size();
		vector<vector<int>> dp(size);
		vector<int>prefix_sum(size);
		for (auto&it : dp)
			it.resize(size);
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
					//dp[i][j] = i == j? data[i]:0;
				dp[i][j] = 0;
			}
		}
		prefix_sum[0] = data[0];
		for (int i = 1; i < size; i++) {
			prefix_sum[i] = prefix_sum[i - 1] + data[i];
		}
		for (int step = 1; step < size; step++) {
			for (int a = 0; a + step < size; a++) {
				int min = numeric_limits<int>::max();
				for (int k = a; k < a + step; k++) {
					if (dp[a][k] + dp[k+1][a + step] < min)
						min = dp[a][k] + dp[k+1][a + step];
				}
				int sum = a == 0 ? prefix_sum[a + step] : prefix_sum[a + step] - prefix_sum[a-1];
				dp[a][a + step] = min +  sum;
			}
		}
		return dp[0][size-1];
	}
	int merge_stone_v3() {
		
	}
};