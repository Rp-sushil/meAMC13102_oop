#include<iostream>
using namespace std;

template<typename t>
void swap(t* a, t* b){
	t temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

template <typename t>
void insertionSort(t* A, int n){
	for(int i = 1; i < n; i++){
		int j = i;
		while(A[j] < A[j - 1]){
			swap(A[j], A[j - 1]);
			j--;
		}
	}
}

template<typename t>
void bubbleSort(t* A, int n){
	for(int i = 0; i < n; i++){
		int flag = 0;
		for(int j = 0; j < n - i - 1; j++){
			if(A[j] > A[j + 1]){
				swap(A[j], A[j + 1]);
				flag = 1;
			}
		}if(flag == 0){
			break;
		}
	}
}


int main()
{
	cout<<"Sample input and output:\n\n"
	<<"  DATA TYPES\n"
	<<"-----------------\n"
	<<"1. Integer\n"
	<<"2. Floating point \n"
	<<"3. Exit\n"
	<<"Enter the option = ";
	int doption;
	cin>>doption;
	if(doption == 3){
		cout<<"Exit successfully \n";
		return 0;
	}
	cout<<"\n\n  SORTING OPTIONS: \n"
	<<"-------------------------\n"
	<<"1. Bubble Sort\n"
	<<"2. Insertion Sort\n"
	<<"3. Exit\n"
	<<"Enter the option = ";
	int soption;
	cin>>soption;
	if(soption == 3){
		cout<<"Exit successfully\n";
		return 0;
	}
	cout<<"Enter no. of terms = ";
	int n;
	cin>>n;
	cout<<"Enter the numbers: \n";
	if(doption == 1){
		int arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		if(soption == 1){
			bubbleSort(arr, n);
		}else{
			insertionSort(arr, n);
		}
		cout<<"The sorted Array is: \n";
		for(int i = 0; i < n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}else{	
		float arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		if(soption == 1){
			bubbleSort(arr, n);
		}else{
			insertionSort(arr, n);
		}
		cout<<"The sorted arrar is: \n";
		for(int i = 0; i < n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;

}