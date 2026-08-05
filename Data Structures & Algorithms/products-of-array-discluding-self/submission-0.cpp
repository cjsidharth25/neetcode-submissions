class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a(nums.size()),b(nums.size());
        int tmp = 1;
        for(int i = 0; i < nums.size(); i++){
            tmp *= nums[i];
            a[i] = tmp;
        }
        tmp = 1;
        for(int j = nums.size()-1; j >= 0; --j){
            tmp *= nums[j];
            b[j] = tmp;
        }
        vector<int> res(nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                res[i] = b[i+1];
            }
            else if(i == nums.size()-1){
                res[i] = a[i-1];
            }
            else{
                res[i] = a[i-1] * b[i+1];
            }
        }
        return res;
    }
};
