class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long s = 1;
        long long ans = -1;
        int maxi = INT_MIN;
        for(int i = 0;i<piles.size();i++) {
            maxi = max(maxi,piles[i]);
        }
        long long e = maxi;

        while(s <= e) {
            long long mid = s + (e-s)/2;

            long long hr = 0;
            for(int i = 0;i<piles.size();i++) {
                hr += (piles[i]+mid-1)/mid;
            }

            if(hr <= h) {
                ans = mid;
                e = mid-1;
            }
            else {
                s = mid+1;
            }

        }

        return ans;
        


    }
};