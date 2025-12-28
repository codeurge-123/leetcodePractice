class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        
        vector<int> ans;

        while(j < nums.size()) {
            if(ans.empty() || ans[ans.size()-1] != nums[j]) {
                ans.push_back(nums[j]);
                i = j;
                j = i+1;
            }
            else {
                j++;
            }
        }

        nums = ans;

        return nums.size();

    }
};