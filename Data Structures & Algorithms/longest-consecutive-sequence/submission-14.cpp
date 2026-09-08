class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0, curr_len = 0;
        for (int i : s)
        {
            //check if i is the start of a sequence.
            if (s.find(i-1) == s.end())
            {
                // for each begining , we make curr length 0.
                curr_len = 0;
                while(s.find(i + curr_len) != s.end()) curr_len++;

                ans = max(curr_len, ans);
            }
        }

        return ans;
    }
};