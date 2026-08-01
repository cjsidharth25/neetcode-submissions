class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = matrix.size()-1;
        while(i <= j){
            int mid = (i+j)/2;
            if(matrix[mid][0] == target){
                return true;
            }
            else if(matrix[mid][0] > target){
                j = mid - 1;
            }
            else if(matrix[mid][0] < target && matrix[mid][matrix[0].size()-1] >= target){
                int a = 0;
                int b = matrix[0].size() - 1;
                while(a <= b){
                    int x = (a+b)/2;
                    if(matrix[mid][x] == target){
                        return true;
                    }
                    else if(matrix[mid][x] > target){
                        b = x - 1;
                    }
                    else{
                        a = x + 1;
                    }
                }
                return false;
            }
            else{
                i = mid + 1;
            }
        }
        return false;
    }
};
