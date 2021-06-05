#include<iostream>
using namespace std;

int bitonic(int a[],int n){
    int inc[n]; // Length of increasing subarray ending at all indexes
    int dec[n]; /// Length of decreasing subarray ending at all indexes
    int i,max;

	inc[0] = 1;// length of increasing sequence ending at first index is 1

	dec[n-1] = 1;// length of increasing sequence starting at first index is 1

    //step-1: Construct increasing sequence array
    for(i=1;i<n;i++){
        inc[i] = (a[i]>=a[i-1])?inc[i-1]+1:1;
    }
    
    //step-2: Construct decreasing sequence array
    for(int i=n-2;i>=0;i--){
        dec[i] = (a[i]>=a[i-1])?dec[i+1]+1:1;
    }

    // Step 3) Find the length of maximum length bitonic sequence
	max = inc[0] + dec[0] - 1;
	for (i = 1; i < n; i++)
		if (inc[i] + dec[i] - 1 > max)
			max = inc[i] + dec[i] - 1;

    return max;
}


int main()
{
	//int arr[] = {12, 4, 78, 90, 45, 23};
	//int n = sizeof(arr)/sizeof(arr[0]);
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
		cout<<bitonic(a, n)<<endl;
	}
	
	return 0;
}