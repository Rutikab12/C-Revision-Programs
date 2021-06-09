#include<iostream>
#include<unordered_map>
using namespace std;

int main(){   //linear time complexity
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int a[n],b[m];
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            cin>>a[i];
            map[a[i]]++;
        }

        for(int i=0;i<m;i++){
            cin>>b[i];
            map[b[i]]++;
        }

        cout<<map.size()<<endl;
    }
}