#include<iostream>
#include<vector>
using namespace std;

class matrix{
	int n,m,v;
	vector<vector<int> > mtrix;
	vector<int> vec;
public:
	matrix();
	void setmatrix(){
		mtrix.resize(n);
		for(int i = 0; i < n; i++){
			mtrix[i].resize(m);
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin>>mtrix[i][j];
			}
		}
	}
	void setvector(){
		for(int i = 0; i < v; i++){
			int x;
			cin>>x;
			vec.push_back(x);
		}
	}
	void setn(int x){n = x;}
	void setm(int x){m = x;}
	void setv(int x){v = x;}
	int getn(){return n;}
	int getv(){return v;}
	int getm(){return m;}
	friend class result;

};
matrix::matrix(){
	n = 0;
	m = 0;
	v = 0;
}
class result {
	vector<int>reslt;
public:
	void initresult(matrix& M){
		reslt.resize(M.getn());
	for(int i = 0; i < M.getn(); i++)
		reslt[i] = 0;
	}
	 void setresult(matrix& M){
		for(int i = 0; i < M.getn(); i++){
			for(int j = 0; j < M.getm(); j++){
				reslt[i] += M.mtrix[i][j] * M.vec[j];
			}
		}
	}
	void getresult(matrix & M){
		for(int i = 0; i < M.getn(); i++){
			cout<<reslt[i]<<" ";
		}
	}
};

int main()
{
	matrix M;
	result R;
	cout<<" \"Matrix * Vector\"  Multiplication:\n====================\n\n";
	cout<<"No. of Rows and Columns of Matrix: ";
	int m;
	cin>>m;
	M.setm(m);
	int n;
	cin>>n;
	M.setn(n);
	cout<<"No. of Elements in Vector: ";
	int v;
	cin>>v;
	M.setv(v);
	cout<<"Enter Matrix:  \n";
	M.setmatrix();
	cout<<"Enter Vector: \n";
	M.setvector();
	R.initresult(M);
	R.setresult(M);
	cout<<"\nResultant Matrix: \n";
	R.getresult(M);
	return 0;
}
