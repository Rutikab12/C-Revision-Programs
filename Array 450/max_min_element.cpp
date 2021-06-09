#include<iostream>
#include<algorithm>
using namespace std;
/*
int main(){
    int n;
    int a[n];
    cin>>n;  //size of the array

    for(int i=0;i<n;i++){  //input the array
        cin>>a[i];
    }

    int max,min;

    if(n==1){      //set max and min temporarily
        max=a[0];
        min=a[0];
    }
    else{
        if(a[0]>a[1]){  //compare with the first index number
            max=a[0];
            min=a[1];
        }
        else{
            max=a[1];
            min=a[0];
        }

        for(int i=2;i<n;i++){  //start traversing from 3 element onwards
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
    }
    cout<<"MAximum element "<<max<<endl;
    cout<<"Minimum element "<<min<<endl;
}
*/

/*2nd approach*/


int main(){
    int n;
    int a[n];
    cin>>n;  //size of the array

    for(int i=0;i<n;i++){  //input the array
        cin>>a[i];
    }
    int min,max;

    if(n%2==0){         //for even number of array
        if(a[0]>a[1]){
            max=a[0];
            min=a[1];
        }
        else{
            max=a[1];
            min=a[0];
        }
        int i=2;
    }
    else{             //for odd number of array
        max=a[0];
        min=a[0];
        int i=1;
    }

    int i;
    while(i<n-1){
        if(a[i]>a[i+1]){    //compare two element at at time
            if(a[i]>max){   //for max element
                max=a[i];
            }

            if(a[i+1]<min){   //for min element
                min=a[i+1];
            }
        }
        else{
            if(a[i+1]>max){
                max=a[i+1];
            }
            if(a[i]>min){
                min=a[i];
            }
        }
        i=i+2;
    }

    cout<<" Max element: "<<max<<endl;
    cout<<" Min element: "<<min<<endl;

return 0;
}