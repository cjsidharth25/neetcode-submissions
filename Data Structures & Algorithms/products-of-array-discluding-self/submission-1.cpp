class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int pref = 1;
        for(int i = 0; i < nums.size(); i++){
            res[i] = pref;
            pref *= nums[i];
        }
        int suf = 1;
        for(int j = nums.size() - 1; j >= 0; j--){
            res[j] *= suf;
            suf *= nums[j];
        }
        return res;
    }
};
