class Solution {
public:
         vector<vector<int>> subsets(vector<int>& nums) {
         int n = nums.size();
        vector<vector<int>> result;

        for (int num = 0; num < (1 << n); num++) {
            vector<int> sub;
            for (int i = 0; i < n; i++) {
                if (num & (1 << i)) {
                    sub.push_back(nums[i]);
                }
            }
            result.push_back(sub);
        }

        return result;
        
    }
};
