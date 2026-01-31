class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int suffixMax = INT_MIN;
        vector<int> suffix(prices.size(),0);
        for(int i = prices.size()-2;i>=0;i--) {
            suffixMax = max(suffixMax,prices[i+1]);

            suffix[i] = suffixMax;
            
        }

        int maxi = INT_MIN;

        for(int i = 0;i<prices.size();i++) {
            maxi = max(maxi,suffix[i]-prices[i]);
        }

        if(maxi < 0) return 0;

        return maxi;

    }
};