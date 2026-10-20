class Solution {
public:
    int findstart(vector<int>& nums){
        int l=0;
        int r=nums.size()-1;

        while(l<r) {
            int mid= (l+r)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }else r=mid;
        }
        return l;
    }

    int BinarySeach(vector<int>& nums,int left,int right,int target){
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target) return mid;
            else if (nums[mid]>target)right=mid-1; 
            else left=mid+1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start=findstart(nums);
        return target >nums[n-1]? BinarySeach(nums,0,start-1,target): BinarySeach(nums,start,n-1,target);
    }
};
