class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m= nums2.size();

        int index1=0,index2=0;
        int i = 0, j = 0, k = 0,curr=0;

        while (i<n && j<m) {
            if(nums1[i]<nums2[j]){
                curr=nums1[i];
                i++;
            }else {
                curr=nums2[j];
                j++;
            }
            if(k== (m+n)/2 -1 ) index1=curr;
            else if (k==(m+n)/2) index2=curr;
            k++;
        }

        while(i<n){
            if(k== (m+n)/2 -1 ) index1=nums1[i];
            else if (k==(m+n)/2) index2=nums1[i];
            k++;
            i++;
        }

        while(j<m) {
            if(k== (m+n)/2 -1 ) index1  = nums2[j];
            else if (k==(m+n)/2) index2 = nums2[j];
            k++;
            j++;
        }

        cout<<index1<<" "<<index2<<endl;
 

        if((m+n)%2 == 0) return (index1+index2)/2.0;

        return long(index2);
       
    }
};


