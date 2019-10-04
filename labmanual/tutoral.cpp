#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	{
		// R-1.1:- d
	}
	{
		/*
		array is given here
		int small = a[0];
		int large = a[0];
		for i=1:n-1 // iterate over array
			if(a[i]>a[i+1])
				small = a[i+1]; //picking the smaller one 
			if(a[i]<a[i+1])
				large = a[i+1]; //picking the larger one

		*/
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i< n; i++){
			cin>>a[i];
		}
		int small = a[0], large = a[0];
		for (int i = 0;i <n; i++){
			if(a[i]>a[i+1])
				small = a[i+1];
			if(a[i]<a[i+1])
				large  = a[i+1];
		}
		printf("min and max : %d %d \n",small,large);
	}
	{
		//R1.3:-
		struct pair
		{
			int first;
			double second;
		};
	}
	{
		//R1.4:-
		//s = "abcabcdabc";
	}
	{
		//R1.5:-
		//(y + (2 * (z++))) < (3 - (w / 5))
	}
	{
		//R1.6:- 
    	double *dp;
    	dp = new double[10];
    	for(int i=0;i<10;i++)
        dp[i]=0.0;
    	for(int i=0;i<10;i++)
        cout<<dp[i];
	delete [] dp;

	}
	{
		//R1.10:- 
		/*
		First funciton only copy the value of x
		otherwise in second fucntion its create referece to x
		whatever changes made to x in fucntion can also seen in x in other fucntio where arguments are passed for this fucntion
		*/
	}
	{
		
	}
	return 0;
}