class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> v(n+1);
        for(auto x : mp){
            v[x.second].push_back(x.first);
        }
        vector<int> res;
        for(int i = nums.size(); i > 0; --i){
            for(int x: v[i]){
                res.push_back(x);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
