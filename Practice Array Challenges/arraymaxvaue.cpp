#include<iostream>
using namespace std;
int max (long long int arr[], long long int n)
{
    long long int i, max = -1000000000;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] > max)
        max = arr[i];
    }
    return max;
}
int main() {
    long long int n;
    cin >> n;
    long long int i;
    long long int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    
   cout << max(arr, n);
    
	return 0;
}