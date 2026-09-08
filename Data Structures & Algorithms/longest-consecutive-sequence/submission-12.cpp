class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        //unordered_
        set<int> s;
        int n = nums.size();
        int ans = 1, temp = 1;
        for (int i: nums) s.insert(i);

        for (int i : s)
        {
            if (s.find(i-1) != s.end()) temp++;
            else temp = 1;
            ans = max(temp, ans);
        }

        return ans;
    }
};
