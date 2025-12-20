class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i = 0;i<nums.size();i++) {
            s.insert(nums[i]);
        }

        vector<int> ans(s.begin(),s.end());
        nums = ans;
        return nums.size();

    }
};