class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i= 0;
        int n= nums.size()-1;
        int j= n;
        int pivot=0;
        
        while (i<=j){
            pivot= (i+j)/2;
            if(nums[pivot]==target) return pivot;
            else if(target < nums[pivot]) j= pivot-1;
            else i= pivot+1;
        }
        return -1;      
    }
};
