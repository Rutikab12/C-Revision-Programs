#include<iostream>
using namespace std;

//introduction to kadanes algorithm
// Standard Kadane's algorithm to find maximum subarray
// sum
int kadane(int a[], int n);


int maxCircularSum(int a[], int n)// The function returns maximum circular contiguous sum in a[]
{

int max_kadane = kadane(a, n);// Case 1: get the maximum sum using standard kadane's algorithm

// Case 2: Now find the maximum sum that includes
// corner elements.
int max_wrap = 0, i;
for (i=0; i<n; i++)
{
		max_wrap += a[i]; // Calculate array-sum
		a[i] = -a[i]; // invert the array (change sign)
}

// max sum with corner elements will be:
// array-sum - (-max subarray sum of inverted array)
max_wrap = max_wrap + kadane(a, n);

// The maximum circular sum will be maximum of two sums
return (max_wrap > max_kadane)? max_wrap: max_kadane;
}


int kadane(int a[],int n){
    int max_so_far=INT_MIN,max_ending_here=0;
    for(int i=0;i<n;i++){
        max_ending_here=max_ending_here+a[i];
        if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
	//int a[] = {11, 10, -20, 5, -3, -5, 8, -13, 10};
	//int n = sizeof(a)/sizeof(a[0]);
	int t;
	
	cin>>t;
	for(int i=0;i<t;i++)
	{
       int n;
       
       cin>>n;
       int a[n];
       for(int j=0;j<n;j++)
       {
       	
       	cin>>a[j];
       }
       
       cout<<maxCircularSum(a, n);
	}
	
	return 0;
}