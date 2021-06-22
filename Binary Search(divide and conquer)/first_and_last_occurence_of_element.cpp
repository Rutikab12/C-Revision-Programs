#include<iostream>
#include<algorithm>
using namespace std;


//O(logn )
int first_occurence(int a[],int n, int key){
    int s=0;
    int e=n-1;

    int ans=-1;
    //update in a direction that ans values gets lower and lower
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            //do two things
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;
}

int last_occurence(int a[],int n, int key){
    int s=0;
    int e=n-1;

    int ans=-1;
    //update in a direction that ans values gets lower and lower
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            //do two things
            ans=mid;
            s=mid+1; //do not stop explore RH part 
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;
}

int main(){
    int arr[]={1,2,5,8,8,8,8,8,10,12,15,20};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    //first and last occurence of a particular element in an array
    //cout<<first_occurence(arr,n,key)<<endl;
    //cout<<last_occurence(arr,n,key)<<endl;
    
    // we can also use binary_search as follows
    bool search = binary_search(arr,arr+n,key);
    if(search){
        cout<<"present at "<<endl;
    }
    else{
        cout<<"not ";
    }

    auto it=lower_bound(arr,arr+n,8);
    cout<<it-arr<<endl;
    
    if((it-arr)==n){
        cout<<"Element is not present";
    }

    cout<<"to ";


    auto ub = upper_bound(arr,arr+n,8);
    cout<<ub-arr<<endl;

    cout<<"Occurence freq of 8 is "<<(ub-it)<<endl;
    return 0;
}