#include<bits/stdc++.h>
using namespace std;
/* O(n^2)
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int f=0;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
                if(s==0){
                    f=1;
                    break;
                }
            }

            if(f==1)
                break;
        }
        if(f==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
*/

//O(n)
bool subArrayExists(int arr[], int n)
{
    unordered_set<int> sumSet;
 
    // Traverse through array
    // and store prefix sums
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
 
        // If prefix sum is 0 or
        // it is already present
        if (sum == 0
            || sumSet.find(sum)
            != sumSet.end())
            return true;
 
        sumSet.insert(sum);
    }
    return false;
}

int main()
{
    int arr[] = { 4,2,0,1,6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (subArrayExists(arr, n))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}