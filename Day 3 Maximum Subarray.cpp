class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mn = INT_MIN, mx = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mx = mx + nums[i];
            if(mn < mx)
                mn = mx;
            if(mx < 0)
                mx = 0;
        }
        return mn;
    }
};
