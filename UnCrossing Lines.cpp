class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B)
    {
        int N=A.size();
        int M=B.size();
        vector< vector<int> > dp(N+1,vector<int>(M+1,0));
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=M;j++)
            {
                if(i==0 or j==0)
                {
                    continue;
                }
                if(A[i-1]==B[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[N][M];
    }
};
