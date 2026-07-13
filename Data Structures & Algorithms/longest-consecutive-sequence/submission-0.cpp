class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int lastsmaller = nums[0];
        int count = 1;
        int longest = 1;

        for(int i=1; i<n; i++)
        {
            if(nums[i] - 1 == lastsmaller)
            {
                count++;
                lastsmaller = nums[i];
            }
            else if(nums[i] != lastsmaller)
            {
                count = 1;
                lastsmaller = nums[i];
            }

            longest = max(longest, count);
        }

        return longest;
        
    }
};
