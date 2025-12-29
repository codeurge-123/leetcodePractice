class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int d = k%nums.size();

        for(int i = nums.size()-d;i<nums.size();i++) {
            temp.push_back(nums[i]);
        }


        for(int i = nums.size()-d-1;i>=0;i--) {
            nums[i+d] = nums[i];
        }

        for(int i = 0;i<d;i++) {
            nums[i] = temp[i];
        }

        


    }
};