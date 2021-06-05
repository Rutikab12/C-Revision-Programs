#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int myCompare(string X, string Y){
    string XY = X.append(Y); //first append Y at the end of X
    string YX = Y.append(X); //secondly append X at the end of Y

    //now return greatest number;
    return XY.compare(YX)>0?1:0;
}

	// Sort the numbers using library sort funtion. The function uses
	// our comparison function myCompare() to compare two strings.
	// See http://www.cplusplus.com/reference/algorithm/sort/ for details
void printlargest(vector<string> arr){
    sort(arr.begin(), arr.end(), myCompare);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<string> arr;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            string s;
            cin>>s;
            arr.push_back(s);
        }
        printlargest(arr);
    }
    return 0;
}


/*

Sample Input: 1
4
54 546 548 60
Output Format: Print the largest value.

Sample Output: 6054854654


// vector<string> arr;

	// //output should be 6054854654
	// arr.push_back("54");
	// arr.push_back("546");
	// arr.push_back("548");
	// arr.push_back("60");
	// printLargest(arr);

	// output should be 777776
	/*arr.push_back("7");
	arr.push_back("776");
	arr.push_back("7");
	arr.push_back("7");*/

	//output should be 998764543431
	/*arr.push_back("1");
	arr.push_back("34");
	arr.push_back("3");
	arr.push_back("98");
	arr.push_back("9");
	arr.push_back("76");
	arr.push_back("45");
	arr.push_back("4");
	*/
