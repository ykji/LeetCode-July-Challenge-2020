class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        result.push_back({});
        for(auto n:nums){
            int size=result.size();
            for(int i=0;i<size;++i){
                vector <int> temp=result[i];
                temp.push_back(n);
                result.push_back(temp);
            }
        }
        return result;
    }
};
