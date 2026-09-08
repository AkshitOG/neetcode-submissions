class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        else if (nums.size() == 1) return 1;
        sort(nums.begin(), nums.end());
        int ans = INT_MIN, temp = 1;
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
        ans = max(ans, temp);
        return ans;
    }
};
