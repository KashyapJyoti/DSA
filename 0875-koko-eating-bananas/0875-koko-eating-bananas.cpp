class Solution {
public:
    long long totalHour(vector<int>& piles, int hourly){
       long long totalHr=0;
        for(int i=0;i<piles.size();i++){
        totalHr+=(piles[i] + hourly - 1) / hourly;
    }
    return totalHr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
      long long maxEle=*max_element(piles.begin(),piles.end());  
      long long low=1, high=maxEle;
      while(low<=high){
        long long mid=low+(high-low)/2;
        long long Hr=totalHour(piles,mid);
        if(Hr<=h)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      }
      return low;
    }
};