#include<iostream>
using namespace std;

class matrix
{
private:
	int rows;
	int col;
	int **mtrix;
public:
	matrix();
	matrix(int r, int c);
	~matrix();
	void setelement(int i, int j , int x);
	int getelement(int i, int j);
	void add(const matrix& m1, const matrix& m2);
	void subtract(const matrix& m1, const matrix& m2);
};

matrix::matrix(){
	rows = 0;
	col = 0;
}

matrix::matrix(int r,int c){
	rows = r;
	col  = c;
	mtrix = new int*[rows];
	for(int i = 0; i < rows; i++){
		mtrix[i] = new int[col];
	}
}

matrix::~matrix(){
	for(int i = 0; i < rows; i++){
		delete [] mtrix[i];
	}
	delete [] mtrix; 
}

void matrix::setelement( int i, int j , int x){
	mtrix[i][j] = x;
}
int matrix::getelement(int i, int j){
	return mtrix[i][j];
}
void matrix::subtract(const matrix& m1, const matrix& m2){
    
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < col; j++){
			mtrix[i][j] = m1.mtrix[i][j] - m2.mtrix[i][j];
		}
	}
}

void matrix::add(const matrix& m1, const matrix& m2){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < col; j++){
			mtrix[i][j] = m1.mtrix[i][j] + m2.mtrix[i][j];
		}
	}
}

int main()
{
	cout<<" MATRIX MANUPULATION"<<endl<<"========================="<<endl;
	printf("Enter no. of  Rows and Coulmns: ");
	int r,c;
	cin>>r>>c;
	matrix m1(r,c);

	cout<<"Enter Matrix A: "<<endl;
	cout<<"================\n"<<endl;
	for(int i = 0; i < r; i++){
		for(int j =0; j < c; j++){
			int x;
			printf("Enter the value of A[%d][%d]	=	",i,j);
			cin>>x;
			m1.setelement(i,j,x);
		}
	}
	matrix m2(r,c);
	cout<<"\nEnter Matrix B: "<<endl;
	cout<<"==================\n";
	for(int i = 0; i < r; i++){
		for(int j =0; j < c; j++){
			int x;
			printf("Enter the value of B[%d][%d]	=	",i,j);
			cin>>x;
			m2.setelement(i,j,x);
		}
	}

	cout<<"MENU=====\n";
	cout<<"1 -> ADDITION\n";
	cout<<"2-> SUBSTRACTION\n";
	cout<<"3->EXIT\n";
	cout<<"============\n";
	cout<<"Enter Option: \n";
	int n;
	cin>>n;
	if(n == 1 || n == 2){
		matrix m3(r,c);
		if( n == 1){
			m3.add(m1,m2);			
		}
		else{
		    m3.subtract(m1,m2);			
		}
		cout<<"Resultant Matrix: \n";
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cout<<m3.getelement(i,j)<<" ";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"Program has been terminated!\n";
		return 1;
	}
}
