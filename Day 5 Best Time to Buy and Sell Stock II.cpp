class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int d = prices.size();
        int sum = 0;
        for(int i = 0; i < d - 1; i += 1)
        {
            if(prices[i] < prices[i + 1])
                sum += ( prices[i + 1] - prices[i] );
        }
        return sum;

    }
};
