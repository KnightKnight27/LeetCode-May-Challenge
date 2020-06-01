class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        unordered_set <int> adj[N+1];
        for(auto it:trust)
        {
            adj[it[0]].insert(it[1]);
        }
        int count=0;
        int judge=-1;
        for(int i=1;i<=N;i++)
        {
            if(adj[i].size()==0)
            {
                count++;
                if(count>1)
                    return -1;
                judge=i;
            }
        }
        for(int i=1;i<=N;i++)
        {
            if(i!=judge)
            {
                if(adj[i].count(judge)==0)
                {
                    return -1;
                }
            }
        }
        return judge;
    }
};
