class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> sorted;
        int n = nums1.size();        
        int m = nums2.size();
        int i=0;
        int j=0;

        while (i<n && j<m){
            if(nums1[i]<=nums2[j]) sorted.push_back(nums1[i++]);
            else sorted.push_back(nums2[j++]);
        }

        while(i<n){
            sorted.push_back(nums1[i++]);
        }

        while(j<m){
            sorted.push_back(nums2[j++]);
        }

        for(auto it: sorted){
            cout<<it<<" ";
        }

        if((m+n)%2==0) return (sorted[(m+n)/2] + sorted[(m+n)/2 - 1] )/2.0;

        return long(sorted[(m+n)/2]);
    }
};

// 1 2 3 4 5 6 7 8


