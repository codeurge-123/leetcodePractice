class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixMax;
        vector<int> suffixMax(height.size());

        int prefix = 0;

        for(int i = 0;i<height.size();i++) {
            prefix  = max(prefix,height[i]);
            prefixMax.push_back(prefix);
        }

        int suffix = 0;
        for(int i = height.size()-1;i>=0;i--) {
            suffix = max(suffix,height[i]);
            suffixMax[i] = suffix;
        }

        int totalTrapWater = 0;

        for(int i = 0;i<height.size();i++) {
            totalTrapWater += abs(min(suffixMax[i],prefixMax[i])-height[i]); 
        }

        return totalTrapWater;


    }
};