class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans = "";
        for(int i=n-1;i>=0;i--)
        {
            char temp = num[i];
            if(temp !='0' && temp !='2' && temp !='4' && temp !='6' && temp !='8' ){
            ans = num.substr(0,i+1);
            return ans;
            }
        }
        return ans;
    }
};
