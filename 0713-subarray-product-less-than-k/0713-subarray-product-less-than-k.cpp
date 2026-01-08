class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0;i<nums.size();i++) {
            long long prefix = 1;
            for(int j = i;j<nums.size();j++) {
                prefix *= nums[j];
                if(prefix < k) count++;
                else break;
            }
        }

        return count;

    }
};