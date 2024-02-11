class Solution {
public:
    void solve(vector<vector<int>> &v, vector<int> n, vector<int> p ){

        if(p.empty()) return;

        vector <int> nn = n;
         nn.push_back(p[0]);
         v.push_back(nn);

       auto start = p.begin()+1;
       auto end = p.end();

        vector<int> temp(p.size()-1);
        copy(start,end,temp.begin());

        solve (v,n,temp);
        solve(v,nn,temp);

    }

    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector<int>> v;
        vector<int> temp;
        v.push_back(temp);
        for(int i =0;i<nums.size();i++)
        {
            vector<int> temp2;
            temp2.push_back(nums[i]);
            v.push_back(temp2);

            vector<int> p(nums.size()-(i+1));
            auto start  = nums.begin() + (i+1);
            auto end = nums.end();
            copy(start,end,p.begin());

            solve(v,temp2,p);
        }
        return v;
    }
};
