class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        long long sum = 0;

        for(int i = 0;i<nums.size();i++) {
            vector<long long> temp;
            long long count = 0;
            for(int j = 1;j<=sqrt(nums[i]);j++) {
                if(nums[i] % j == 0) {
                    temp.push_back(j);
                    count++;
                    if(j != nums[i] / j) {
                        temp.push_back(nums[i]/j);
                        count++;
                    }
                }
            }
            if(count == 4) {
                for(long long &s : temp) {
                    sum += s;
                }
            }
        }

        return sum;

    }       
};