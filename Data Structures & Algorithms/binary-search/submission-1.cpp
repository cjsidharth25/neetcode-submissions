class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k = 0;
        for(int b = nums.size()/2; b >= 1; b /=2){
            while(k+b < nums.size() && nums[k+b] <= target) k += b;
        }
        if(nums[k] == target){
            return k;
        }
        return -1;
    }
};
