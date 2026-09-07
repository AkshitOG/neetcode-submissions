class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> m;
        int n = strs.size();
        
        for (string s: strs)
        {
            sort(s.begin(), s.end());

            if (m.find(s) == m.end())
            {
                m[s] = ans.size();
                ans.push_back({});
            }
        }

        for (int i = 0; i<n; i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            ans[m[temp]].push_back(strs[i]);
        }

        return ans;
    }
};
