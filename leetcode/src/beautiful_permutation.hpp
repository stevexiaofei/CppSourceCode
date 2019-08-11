#include<vector>
using namespace std;

class Solution{
public:
	int count;
	
	vector<int> data;
	vector<int> is_visited;
	int n;
	Solution() {
		n = 0;
		count = 0;
	};
	int count_beautiful_permutation(rsize_t m){
		
		n=m;
		//assert(n>10);
		cout << "here";
		data.reserve(n);
		//return 0;
		is_visited.reserve(n);
		
		count=0;
		
		for(int i=0;i<n;i++){
			cout << "here1"<<i<<endl;
			data[i]=i+1;
			is_visited[i]=false;
		}
		get_count(0);
		
		return count;
	};
	void get_count(int x_th){
		//return;
		cout << x_th << count<<endl;
		if(x_th>=n){
			count++;
			cout << "reached" << endl;
			return;
		}
		//get_count(x_th + 1);
		for(int i=0;i<n;i++){
			if((data[i]%(x_th+1)==0||(x_th+1)%data[i]==0)&&is_visited[i]==false){
				cout << "index:" << i << x_th<<endl;
				is_visited[i]=true;
				get_count(x_th+1);
				is_visited[i]=false;
			}
		}
		return;
	};
	
};