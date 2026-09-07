class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> ss; //Sorted_Strings
        int n = strs.size();

        for (string s: strs)
        {
            sort(s.begin(), s.end());
            if (ss.find(s) == ss.end())
            {
                ss[s] = ans.size();
                ans.push_back({});
            }
        }

        for (int i = 0; i<n; i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            ans[ss[s]].push_back(strs[i]);
        }

        return ans;
    }
};
