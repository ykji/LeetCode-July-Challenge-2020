class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ans;
        ans.push_back(1);
        int x=0,y=0,z=0,p=1;
        for(int i=1;i<n;++i){
            ans.push_back(min(ans[x]*2,min(ans[y]*3,ans[z]*5)));
            if(ans[i]==ans[x]*2)  ++x;
            if(ans[i]==ans[y]*3)  ++y;
            if(ans[i]==ans[z]*5)  ++z;
        }
        return ans[n-1];
    }
};
