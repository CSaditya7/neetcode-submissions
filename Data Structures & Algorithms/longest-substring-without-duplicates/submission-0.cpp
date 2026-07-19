class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char, int> lastIndex;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            char ch = s[right];

            if (lastIndex.count(ch)) {
                left = max(left, lastIndex[ch] + 1);
            }

            lastIndex[ch] = right;

            ans = max(ans, right - left + 1);
        }

        return ans;
        
    }
};
