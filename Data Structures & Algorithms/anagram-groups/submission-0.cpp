class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            vector<int> a (26,0);
            for(int j = 0; j < strs[i].size(); j++){
                a[strs[i][j]-'a']++;
            }
            mp[a].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto x : mp){
            res.push_back(x.second);
        }
        return res;
    }
};
