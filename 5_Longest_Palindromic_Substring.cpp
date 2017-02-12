#include <iostream>
#include <string>

using namespace std;

string longestPalindrome(string s){
	string cnt = "";
	if (s.length() < 2)
		return 0;
	if (s.length() == 2) {
		return (s[0] == s[1]); 
	}

	int i=0, j=s.length() - 1;
	while( i <= j ){

	}
	return;
}

int main(){
	string str = "babad";
	cout << longestPalindrome(str) << '\n';
	return;
}