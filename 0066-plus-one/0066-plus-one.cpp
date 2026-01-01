class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1] < 9) {
            digits[digits.size()-1]++;
        }
        else {
            for(int i = digits.size()-1;i>=0;i--) 
            {
                if(i == 0 && digits[i] == 9) {
                    digits[i] = 0;
                    reverse(digits.begin(),digits.end());
                    digits.push_back(1);
                    reverse(digits.begin(),digits.end());
                    break;
                }

                else if(digits[i] < 9) {
                    digits[i]++;
                    break;
                }
                else {
                    digits[i] = 0;
                }
            }
        }
        return digits;
    }
};