class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<int> currState(8);
        currState[0]=0;
        currState[7]=0;
        N=N%14;
        if(!N) N=14;
        while(N--){
            for(int i=1;i<=6;++i){
                if(cells[i-1]==cells[i+1])   currState[i]=1;
                else    currState[i]=0;
            }
            cells=currState;
        }
        return cells;
    }
};
