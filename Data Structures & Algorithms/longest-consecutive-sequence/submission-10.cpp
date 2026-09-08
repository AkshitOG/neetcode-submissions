class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        sort(nums.begin(), nums.end());
        int ans = 1, temp = 1;
        int n = nums.size();
        for (int i = 0; i<n-1; i++)
        {
            if (nums[i] == nums[i+1]) continue;
            if (nums[i] == nums[i+1]-1)
            {
                temp++;
            }
            else
            {
                temp = 1;
            }
            ans = max(ans, temp);
        }
        return ans;
    }
};
