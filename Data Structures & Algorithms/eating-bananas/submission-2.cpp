class Solution {
public:
    bool isCurrentEatingSpeedValid(vector<int> piles,int h,int k) {
        int n = piles.size();
        // cout<<h<<" "<<k<<endl;
        for(int i=0;i<n;i++){
                if(piles[i]<=k) h-=1;
                else if (piles[i]%k==0) h-=piles[i]/k;
                else h-=(piles[i]/k + 1);

        }
        // cout<<h<<" "<<k<<endl;
        return h>=0;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int lower=1;
        int upper =1;
        int mid=0;

        for (auto it: piles){
            upper=max(it,upper);
        }

        int ans=upper;

        while(lower>=0 && lower<=upper){
            mid= (upper+lower)/2;
            if(isCurrentEatingSpeedValid(piles,h,mid)){
                ans=mid;
                upper = mid-1;
            }else{
                lower = mid+1;
            } 
        }
        return ans;                 
        
    }
};

