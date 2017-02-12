#include <string>
#include <iostream>
#include <climits>
using std::string;

int reverse(int x) {
    long long y = 0;
    while (x) {
    	y = y * 10 + x % 10;
    	x = x/10;
    }
    return ( y > INT_MAX || y < INT_MIN) ? 0 : y;
}

int main(){
	std::cout << reverse(1534236469);
	return 0;
}