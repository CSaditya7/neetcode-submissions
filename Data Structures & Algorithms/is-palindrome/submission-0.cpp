class Solution {
public:
 bool isPalindrome(string &s, int start, int end) {
                if (start >= end) 
            return true;
        if (!isalnum(s[start])) 
            return isPalindrome(s, start + 1, end);
        if (!isalnum(s[end])) 
            return isPalindrome(s, start, end - 1);
        if (tolower(s[start]) != tolower(s[end])) 
            return false;
        return isPalindrome(s, start + 1, end - 1);
    }
    bool isPalindrome(string s) {
        return isPalindrome(s, 0, s.length() - 1);

        
    }
};
