class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        sort(nums.begin(),nums.end());

        int maxi = INT_MIN;

        while(left < right) {
            if(nums[left]+nums[right] > maxi) {
                maxi = nums[left]+nums[right];
            }
            left++;
            right--;
        }

        return maxi;

    }
};