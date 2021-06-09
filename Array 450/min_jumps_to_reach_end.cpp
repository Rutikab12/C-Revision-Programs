#include<iostream>
using namespace std;
/*
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
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[j]!=INT_MAX and (a[j]+j>=i)){
                    if(dp[j]+1<dp[i]){
                        dp[i]=dp[j]+1;
                    }
                }
            }
        }
        if(dp[n-1]!=INT_MAX)
            cout<<dp[n-1]<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}
This approach has O(n^2) complexity.
*/

/*Second approach has O(n) complexity.*/
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<" Number of steps to reach end : "<<minJumps(a,n);
    }
    
}

int minJumps(int a[],int n){
    int maxR=a[0];  //max reachable point
    int step=a[0];
    int jump=1;

    if(n==1)
        return 0;
    else if(a[0]==0)
        return -1;
    else{
        for(int i=0;i<n;i++){
            if(i==n-1){    //here it has reach last point
                return jump;
            }
            maxR=max(maxR,i+a[i]);  //from the 2nd elements onwards
            step--;      //decrease step
            if(step==0){   //if it is zero we have reached the point 
                jump++;    //so take jump
                if(i>=maxR){
                    return -1;
                }
                step = maxR-i;
            }
        }
    }
}


/*
Time complexity is O(n^n)
int minJumps(int arr[], int n)
{
 
    // Base case: when source and
    // destination are same
    if (n == 1)
        return 0;
 
    // Traverse through all the points
    // reachable from arr[l]
    // Recursively, get the minimum number
    // of jumps needed to reach arr[h] from
    // these reachable points
    int res = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
        if (i + arr[i] >= n - 1) {
            int sub_res = minJumps(arr, i + 1);
            if (sub_res != INT_MAX)
                res = min(res, sub_res + 1);
        }
    }
 
    return res;
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 3, 6, 3, 2,
                  3, 6, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to";
    cout << " reach the end is " << minJumps(arr, n);
    return 0;
}

*/