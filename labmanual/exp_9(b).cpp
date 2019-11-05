#include<iostream>
using namespace std;

template<typename t>
void merge(t arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
  
    t L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  

    i = 0;  
    j = 0;  
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

template<typename t>
void mergeSort(t arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
}
template<typename t>
void swap(t* a, t* b){
	t temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

template<typename t>
int partition(t* A, int start, int end){
	int pivot = A[end];
	int pIndex = start;
	for(int i = start; i < end; i++){
		if(A[i] <= pivot){
			swap(A[i], A[pIndex]);
			pIndex++;
		}
	}
	swap(A[pIndex], A[end]);
	return pIndex;
}

template<typename t>
void quickSort(t* A, int start, int end){
	if(start < end){
		int pIndex = partition(A, start ,end);
		quickSort(A, start, pIndex - 1);
		quickSort(A, pIndex + 1, end);
	
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
	<<"1. Quick Sort\n"
	<<"2. Merge Sort\n"
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
			quickSort(arr, 0,n-1);
		}else{
			mergeSort(arr, 0,n-1);
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
			quickSort(arr, 0, n-1);
		}else{
			mergeSort(arr, 0,n-1);
		}
		cout<<"The sorted arrar is: \n";
		for(int i = 0; i < n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;

}