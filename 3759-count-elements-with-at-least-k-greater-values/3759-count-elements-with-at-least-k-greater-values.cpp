class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i  = 0;i<nums.size();i++) {
            // finding the strictly greater number index
            int index = upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            if(nums.size() - index >= k) {
                count++;
            }
        }

        return count;

    }
};