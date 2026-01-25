class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> temp;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 0) {
                temp.push_back(nums[i]);
            }
        }

        if(temp.size() == 0) return nums;

        int n = temp.size();
        int d = k % n;

        vector<int> tempy;

        for(int i = 0; i < d; i++) {
            tempy.push_back(temp[i]);
        }

        for(int i = d; i < n; i++) {
            temp[i - d] = temp[i];
        }

        for(int i = 0; i < d; i++) {
            temp[n - d + i] = tempy[i];
        }

        int idx = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 0) {
                nums[i] = temp[idx];
                idx++;
            }
        }

        return nums;
    }
};
