#include<iostream>
#include<string>
using namespace std;

int main(){
    int k;
    cin>>k;
    string str;
    cin>>str;
    int left=0, ans=0;
    int count[2] = {0};
    for (int i=0;i < str.length();i++) {
        char c =str[i];
        count[c-'a']++;
        if(min(count[0], count[1]) > k) {
            count[str[left]-'a']--;
            left++;
        } else {
            ans++;
        }
    }
    cout<<ans;  
}



/*
bool isPerfect(string str, int start, int end){
	char ch = str[start];
	for(int i = start + 1; i <= end; i++){
		if(str[i] != ch){
			return false;
		}
	}
	return true;
}
int main(){
	int flippableChars;
	cin >> flippableChars;
	string str;
	cin >> str;
	int perfectness = 0, pStart = -1, pEnd = -1;
	char perfChar;
	for(int i = 0; str[i] != '\0'; i++){
		for(int j = 0; str[j] != '\0'; j++){
			if(isPerfect(str, i, j) and perfectness < j - i + 1){
				perfectness = j - i + 1;
				pStart = i;
				pEnd = j;
				perfChar = str[i];
			}
		}
	}
	//make more perfect
	for(int i = pStart - 1; i >= 0; i--){
		if(flippableChars){
			if(str[i] != perfChar){
				str[i] = perfChar;
				flippableChars--;
			}
			pStart--;
		}
		else{
			if(str[i] == perfChar){
				pStart--;
			}
			else{
				break;
			}
		}
	}
	for(int i = pEnd + 1; str[i] != '\0'; i++){
		if(flippableChars){
			if(str[i] != perfChar){
				str[i] = perfChar;
				flippableChars--;
			}
			pEnd++;
		}
		else{
			if(str[i] == perfChar){
				pEnd++;
			}
			break;
		}
	}
	cout << pEnd - pStart + 1;
	return 0;
}*/
