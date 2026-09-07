class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i: nums)
        {
            m[i]++;
        }

        for (auto &[a, b]: m)
        {
            if (b > 1) return true;
        }
        
        return false;
    }
};