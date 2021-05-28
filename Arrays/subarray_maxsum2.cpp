#include<iostream>
using namespace std;

int main(){
    int a[100];
    int cumsum[100]={0};  //precomputing 
    int i,j,k,n;
    int maxsum=0;   //maximum sum
    int currsum=0;  //current sum

    int left=-1;
    int right=-1;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    cin>>a[0];
    cumsum[0]=a[0];
    for ( i = 1; i < n; i++)
    {
        cin>>a[i];
        cumsum[i]=cumsum[i-1]+a[i];
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            //elements of subarray
            currsum=0;
            
            currsum=cumsum[j]-cumsum[i-1];
            //update the maximum sum if cs> maximumsum
            //cout<<currsum<<endl;
            if(currsum>maxsum){
                maxsum=currsum;
                left=i;
                right=j;
            }

        }
    }


    //print the maximum sum
    cout<<"Maximum Sum "<<maxsum<<endl;

    //print the subarray
    for(k=left;k<=right;k++){
        cout<<a[k]<<","<<endl;
    }

    return 0;
}