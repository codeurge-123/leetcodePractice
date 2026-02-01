class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;

        int mid = s + (e-s)/2;  

        int ans = -1;

        while(s <= e) {
            if(mid+1 < nums.size() && nums[mid] > nums[mid+1]) {
                ans = mid;
                break;
            }
            else if(nums[mid] < nums[0]) {
                e = mid-1;
            }
            else s = mid+1;

            mid = s + (e-s)/2;

        }


        return nums[ans+1];

    }
};