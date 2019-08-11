#include <cmath>
#include<iostream>
using namespace std;
class Solution{
public:
	void rotate_mat(int *pmat,int n){
		int half=std::ceil(n/2.);
		cout << "half: " << half << endl;
		for(int i=0;i<half;i++){
			for(int j=0; j<n-half; j++){
				int index1=i*n+j;
				int index2=j*n+(n-1-i);
				int index3=(n-1-i)*n+(n-1-j);
				int index4=(n-1-j)*n+i;
				cout << "index: " << index1<<index2<<index3<<index4 << endl;
				int tmp=pmat[index2];
				pmat[index2]=pmat[index1];
				pmat[index1]=pmat[index4];
				pmat[index4]=pmat[index3];
				pmat[index3]=tmp;
			}
		}
	};
	
};