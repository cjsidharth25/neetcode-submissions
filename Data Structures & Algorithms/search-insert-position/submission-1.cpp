class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k = 0;
        for(int b = nums.size()/2 ; b >= 1; b /= 2){
            while(k+b < nums.size() && nums[k+b] <= target) k += b;
        }
        if(nums[k] == target){
            return k;
        }
        else if(target < nums[0]){
            return 0;
        }
        else{
            return k + 1;
        }
    }
};