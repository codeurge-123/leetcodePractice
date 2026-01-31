class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
    
        sort(nums.begin(),nums.end());
        int count = 0;
        int maxi = INT_MIN;

        for(int i = 0;i<nums.size()-1;i++){ 
            if(nums[i+1]-nums[i] == 1) {
                count++;
            }
            else if(nums[i+1] == nums[i]) continue;
            else {
                count = 0;
            }

            maxi = max(count,maxi);

        }
        if(maxi == INT_MIN) return 1;
        return maxi+1;

    }
};