class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt=0;
        int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    
                }
                if(grid[i][j]==1) fresh++;
            }
        }
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        while(!q.empty()&&fresh > 0){
            int size = q.size();
            for(int i=0;i<size;i++){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow >= 0 && nrow < n &&
                    ncol >= 0 && ncol < m &&grid[nrow][ncol]==1){
                        fresh--;
                        grid[nrow][ncol]=2;
                        q.push({nrow,ncol});
                        
                    }
            }
        }
        cnt++;
        

    }
    if(fresh>0) return -1;
    return cnt;}
};