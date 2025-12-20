class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        for(int i = 1;i<nums.size();i++) {
            if(!(nums[i] >= nums[i-1])) {
                if(count == 0) count++;
                else return false;
            }        
        }

        if(count != 0) {
            if(!(nums[0] >= nums[nums.size()-1])) return false;
        }


        return true;

    }
};