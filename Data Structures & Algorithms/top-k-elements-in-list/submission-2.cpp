class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }
        vector<vector<int>> v(n+1);
        for(auto x : mp){
            v[x.second].push_back(x.first);
        }
        vector<int> res;
        for(int i = v.size()-1; i > 0; --i){
            for(int x : v[i]){
                res.push_back(x);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
