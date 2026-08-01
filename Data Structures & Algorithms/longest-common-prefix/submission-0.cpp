class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int m = INT_MAX;
        int n = strs.size();
        for(int i = 0; i < n; i++){
            int s = strs[i].size();
            m = min(m,s);
        }
        for(int i = 0; i < m; i++){
            char x = strs[0][i];
            for(int j = 0; j < n; j++){
                if(strs[j][i] != x){
                    return ans;
                }
            }
            ans += x;
        }
        return ans;
    }
};