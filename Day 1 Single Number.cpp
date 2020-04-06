
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int D = 0;
        map < int ,int >mp;
        for(auto x : nums)
        {
            mp[x]++;
        }
        for(auto X : mp)
        {
            if(X.second == 1)
            {
                D = X.first;
                break;
            }
        }
        return D;

    }
};
