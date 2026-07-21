class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int m = s1.size(), n = s2.size();
        if (m > n) return false;
        vector<int> need(26, 0);
        for (char c : s1)
            need[c - 'a']++;
        for (int i = 0; i <= n - m; i++) {
            vector<int> curr(26, 0);
            for (int j = i; j < i + m; j++)
                curr[s2[j] - 'a']++;
            if (curr == need)
                return true;
        }
        return false;
    }
};
