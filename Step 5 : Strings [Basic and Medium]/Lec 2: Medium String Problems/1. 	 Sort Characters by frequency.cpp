class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        vector<pair<char, int>> v;

        string ans = "";
        for (auto it : mp) {
            v.push_back(make_pair(it.first, it.second));
        }

        sort(v.begin(), v.end(), [](auto& left, auto& right) {
            return left.second > right.second;
        });

        // for(auto i : v){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl;

        for(auto i :v ){
            while(i.second--){
                ans+= i.first;
            }
        }
        return ans;
    }
};
