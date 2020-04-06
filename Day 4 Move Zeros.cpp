class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto it = nums.begin();
        int cnt = 0;
        while(it != nums.end())
        {
            if(*it == 0)
            {
                cnt++;
                it = nums.erase(it);
            }
            else
                ++it;
        }
        for(int i = 0; i < cnt; i++)
        {
            nums.emplace_back(0);
        }
        //return nums;

    }
};
