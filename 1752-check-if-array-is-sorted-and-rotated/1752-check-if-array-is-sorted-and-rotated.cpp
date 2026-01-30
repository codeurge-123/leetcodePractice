class Solution {
public:

    bool checkforsort(vector<int> &nums) {
        for(int i = 0;i<nums.size()-1;i++) {
            if(nums[i] > nums[i+1]) return false;
        }
        return true;
    }

    bool check(vector<int>& nums) {

        if(checkforsort(nums)) return true;

        if(nums[0] < nums[nums.size()-1]) return false;

        int first = 0;
        int second = 0;
        for(int i = 0;i<nums.size()-1;i++) {
            if(nums[i] > nums[i+1]) {
                second = i+1;
                break;
            }
        }


        while(first < second-1) {
            if(nums[first] > nums[first+1]) return false;
            first++;
        }

        while( second < nums.size()-1) 
        {
            if(nums[second] > nums[second+1]) return false;
            second++;
        }

        return true;
    }
};