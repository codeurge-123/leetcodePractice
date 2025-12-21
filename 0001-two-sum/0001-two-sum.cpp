class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> ans;

        for(int i = 0;i<nums.size();i++) {
            ans.push_back({nums[i],i});
        }


        sort(ans.begin(),ans.end());


        int left = 0;
        int right = ans.size()-1;

        while(left <= right) {
            if(ans[left].first + ans[right].first == target) {
                return {ans[left].second,ans[right].second};
            }
            else if(ans[left].first + ans[right].first > target) {
                right--;
            }
            else {
                left++;
            }
        }

        return {-1,-1};



    }
};