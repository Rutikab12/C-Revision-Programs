#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    //call the sort function
    sort(a,a+n);

    
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (a[i] + a[l] + a[r] == target)
            {
                cout << a[i] << a[l]<<" "<<a[r] << endl;
                l++;
                r--;
            }
            else if (a[i] + a[l] + a[r] < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    

    return 0;
}