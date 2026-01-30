class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int d = k%nums.size();

        vector<int> temp;       
        for(int i = 0;i<nums.size()-d;i++) {
            temp.push_back(nums[i]);
        }

        for(int i = nums.size()-d;i<nums.size();i++) {
            nums[i-(nums.size()-d)] = nums[i];
        }

        for(int i = d;i<nums.size();i++) {
            nums[i] = temp[i-d];
        }



    }
};