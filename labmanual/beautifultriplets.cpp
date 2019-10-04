// binary search , greedy algorithm, easy-medium,

#include<iostream>
#include<vector>
int bs1(int l,int r,int x){
	int mid = (l + r) / 2;
	if(mid < x){return mid;}
	else if(mid > x)
}
using namespace std;
int main()
{	
	int n;
	cin>>n;
	int a[n];
	vector<int>v;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		int bs1 = bs1(0, i-1, a[i]);
		int bs2 = bs2(i, n-1, a[i]);
		if(bs1 != -1 && bs2 != -1){
			v.push_back((bs1 * a[i] * bs2));
		}
	}

}