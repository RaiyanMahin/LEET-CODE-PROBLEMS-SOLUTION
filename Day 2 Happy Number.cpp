class Solution {
public:
    int su(int n)
    {
        int sq = 0;
        while(n)
        {
            int di = n % 10;
            sq += di * di;
            n /= 10;
        }
        return sq;
    }
    bool isHappy(int n) {
        set <int > s;
        s.insert(n);
        while(1)
        {
            if(n == 1)
                return true;
            n = su(n);
            if(s.find(n) != s.end())
                return false;
            s.insert(n);
        }
        return false;
    }
};
N
