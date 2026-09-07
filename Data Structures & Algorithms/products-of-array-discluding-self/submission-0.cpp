class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int product = 1;
        int zero_count = 0;
        for (int i = 0; i<n; i++)
        {
            if (nums[i]  == 0)
            {
                zero_count++;
            }
            else
            {
                product *= nums[i];
            }
        }

        for (int i = 0; i<n; i++)
        {
            if (nums[i] == 0)
            {
                if (zero_count > 1)
                {
                    ans.push_back(0);
                }
                else ans.push_back(product);
            }
            else if (zero_count)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(product/nums[i]);
            }
        }

        return ans;
    }
};
