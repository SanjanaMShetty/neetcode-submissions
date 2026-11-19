class Solution {
public:
    bool isCycleDFS(int src,vector<vector<int>>& prerequisites,vector<bool>& vis,vector<bool>& recpath){
        vis[src]=true;
        recpath[src]=true;
        for(int i=0;i<prerequisites.size();i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            if(u==src){
                if(!vis[v]){
                    if(isCycleDFS(v,prerequisites,vis,recpath)){
                        return true;
                    }
                }else if(recpath[v]){
                    return true;
                }
            }
        }
        recpath[src]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool>vis(numCourses+1,false);
        vector<bool>recpath(numCourses+1,false);
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(isCycleDFS(i,prerequisites,vis,recpath)){
                    return false;
                }
            }
        }
        return true;
    }
};
