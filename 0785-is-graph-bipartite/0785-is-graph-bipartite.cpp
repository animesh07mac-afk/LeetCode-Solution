class Solution {
public:
  
    bool isBipartite(vector<vector<int>>& graph) {
        int n= graph.size();
        vector<int >color(n,0);
        for(int i=0;i <n;i++){
            if(color[i]!=0){
                continue;
            }
            queue<int>q;
            q.push(i);
            color[i]=1;
            while(!q.empty()){
                int node =q.front();
                q.pop();

                for(int n :graph[node]){
                    if(color[n]==0){
                        color[n]=-color[node];
                        q.push(n);
                    }
                    else if (color[n] == color[node]) {
                        return false;

                }
                
            }
        }}

       return true ;

    }
};