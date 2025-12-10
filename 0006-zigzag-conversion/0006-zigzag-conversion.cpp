class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows);

        if(numRows == 1) return s;

        int i = 0;
        bool flag = false;
        for(int j = 0;j<s.length();j++) {
            ans[i] += s[j];
            if(i == 0 || i == numRows-1) flag = !flag;

            if(flag == true) i++;
            else i--;

        }

        string finalans = "";
        for(int i = 0;i<ans.size();i++) {
            for(int j = 0;j<ans[i].length();j++) {
                finalans += ans[i][j];
            }
        }

        return finalans;

    }
};