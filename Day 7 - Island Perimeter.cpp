class Solution {
    int fun(vector<vector<int>>& grid,int x,int y,int n,int m){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int row[]={0,-1,0,+1};
        int column[]={-1,0,+1,0};
        int cnt=0;
        int tempx=x,tempy=y;
        for(int i=0;i<4;++i){
            tempx+=row[i];  tempy+=column[i];
            if(tempx>=0 && tempx<=n && tempy>=0 && tempy<=m){
                if(grid[tempx][tempy]==1)
                    ++cnt;
            }
            tempx=x;tempy=y;
        }
        return 4-cnt;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size()-1;
        int m=grid[0].size()-1,sum=0;
        for(int i=0;i<=n;++i){
            for(int j=0;j<=m;++j){
                if(grid[i][j]==1){
                    sum+=fun(grid,i,j,n,m);
                }
            }
        }
        return sum;
    }
};
