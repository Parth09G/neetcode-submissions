class Solution {
public:
    bool search(vector<int> nums, int target){
        int i=0;
        int j= nums.size()-1;
        int pivot=0;
        while(i<=j) {
            pivot=(i+j)/2;
            if(nums[pivot]==target)return true;
            else if (nums[pivot] > target) j = pivot - 1;
            else i = pivot + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col= matrix[0].size();

        for(int i=0;i< matrix.size();i++){
            if(matrix[i][col-1]>= target){
                cout<<matrix[i][col-1];
                return search(matrix[i],target);
            }
        } 

        return false;   
    }
};
