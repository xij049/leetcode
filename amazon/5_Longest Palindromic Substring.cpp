/**************************************************************** 
5. Longest Palindromic Substring
Given a string s, find the longest palindromic substring in s. 
You may assume that the maximum length of s is 1000.
Example:

Input: "babad"

Output: "bab"

Note: "aba" is also a valid answer.

Example:

Input: "cbbd"

Output: "bb"

***************************************************************/

class Solution {
public:
    string longestPalindrome(string s) {
        const int len = s.length();
        int max_s = 0, max_l = 0;
        for (int i = 0; i < len; ) {
            int start = i, end = i;
            while (end + 1 < len && s[end] == s[end+1]) end++;
            i = end + 1;
            while (start - 1 >= 0 && end + 1 < len && s[start-1] == s[end+1]) {
                start--;
                end++;
            }
            if (end - start + 1 > max_l) {
                max_l = end - start + 1;
                max_s = start;
            }

        }
        return s.substr(max_s,max_l);
    }
};