class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0,right=m*n-1;
        while(left<=right){
            int mid = left +(right-left)/2;
            int midVal = matrix[mid/m][mid%m];
            if(target == midVal){
                return true;
            }else if(target<midVal){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return false;
    }
};
