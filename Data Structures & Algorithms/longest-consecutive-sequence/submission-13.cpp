class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        unordered_set<int> s(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 1, temp = 1;
        int current = 0;

        for (int i : nums)
        {
            if (s.find(i-1) == s.end())
            {
                current = 0;
                while(s.find(i+current) != s.end()) current++;
            }
            ans = max(current, ans);
        }

        return ans;
    }
};
