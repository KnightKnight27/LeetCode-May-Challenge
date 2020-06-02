bool dfs(int s,vector<int>* adj,unordered_map<int,bool> &Hash,unordered_map<int,bool> &vis)
{
    Hash[s]=true;
    vis[s]=true;
    for(auto it:adj[s])
    {
        if(Hash[it]==true)
        {
            return true;
        }
        if(!vis[it] and dfs(it,adj,Hash,vis))
        {
            return true;
        }
    }
    Hash[s]=false;
    return false;
}
bool cycle(vector<int>*  adj,int N)
{
    unordered_map<int,bool> Hash;
    unordered_map<int,bool> vis;
    for(int i=0;i<N;i++)
    {
        Hash[i]=false;
        vis[i]=false;
    }
    for(int i=0;i<N;i++)
    {
        if(!vis[i])
        {
            if(dfs(i,adj,Hash,vis))
                return true;
        }
    }
    return false;
}
class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& arr) 
    {
        vector<int> adj[N];
        for(auto it:arr)
        {
            adj[it[0]].push_back(it[1]);
        }
        return !cycle(adj,N);
        
    }
};
