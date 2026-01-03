class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {
         const long long INF = 1e18;
        vector<long long> limit(n, INF);

        limit[0] = 0;

        for (auto &r : restrictions) {
            limit[r[0]] = min(limit[r[0]], (long long)r[1]);
        }

        for (int i = 0; i < n - 1; i++) {
            limit[i + 1] = min(limit[i + 1], limit[i] + diff[i]);
        }

        for (int i = n - 2; i >= 0; i--) {
            limit[i] = min(limit[i], limit[i + 1] + diff[i]);
        }

        long long ans = 0;
        for (long long x : limit) ans = max(ans, x);

        return (int)ans;
        
        
        
    }
};