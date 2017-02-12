#include <iostream>
#include <string>

using std::string;

int lengthOfLongestSubstring(string s) {
    if (s.length()<2)
        return s.length();
    int len = 0;
    int tmp = 0;
    int idx = 0;
    bool checker[256] = {0};
    for (int start=0; start<s.length();++start){

        idx = start;
        tmp = 0;

        for (int j = 0; j < 256; j++)
            checker[j] = 0;

        while(idx < s.length()){
            int c = (int) s[idx];

            if (!checker[c]){
                tmp += 1;
                checker[c] = 1;
                ++idx;
            } else {
                break;
            }
        }
        len = len > tmp ? len: tmp;
        if ((s.length()-start-1)<len)
            break;
    }
    return len;
}

int main(){
    string s = "au";
    std::cout << lengthOfLongestSubstring(s);
}