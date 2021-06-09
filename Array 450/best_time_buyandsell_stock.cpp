#include<iostream>
using namespace std;

int maxProfit(int prices[], int N){
    int n=N;
    int cost = 0;
    int maxCost=0;

    if(n==0)
        return 0;

    //store the first element in a array
    int min_price=prices[0];

    for(int i=0;i<n;i++){
        //now compare first element with all
        //the element and find max element
        min_price=min(min_price,prices[i]);

        //since min_price is smallest element
        //so substract with every element of array and return maxCost
        cost = prices[i] - min_price;

        maxCost = max(maxCost,cost);
    }

    return maxCost;
}   //O(n)

int main(){
    int prices[]={7,1,5,3,6,4};
    int N = sizeof(prices)/sizeof(prices[0]);

    cout<<maxProfit(prices,N);

    return 0;
}