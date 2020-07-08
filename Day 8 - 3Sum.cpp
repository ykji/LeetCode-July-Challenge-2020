class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int j,k,n=nums.size()-1;
        if(n<2) return {};
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n-2;++i){
            if(i==0 || nums[i]!=nums[i-1]){
                j=i+1;
                k=n;
                while(j<k){
                    int sum=nums[i]+nums[j]+nums[k];
                    if(sum<0)  ++j;
                    else if(sum>0) --k;
                    else{
                        ans.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j]==nums[j+1])    ++j;
                        while(j<k && nums[k]==nums[k-1])    --k;
                        ++j;
                        --k;
                    }
                }
            }
        }
        return ans;
    }
};
