class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> Prefix(n,1);
        vector<int> Suff(n,1);
        for(int i=1;i<n;i++){
            Prefix[i]=Prefix[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            Suff[i]=Suff[i+1]*nums[i+1];
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(Prefix[i]*Suff[i]);
        }
        return ans;
    }
};