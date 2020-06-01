int x[]={1,-1,0,0};
int y[]={0,0,1,-1};
void dfs(int R,int C,vector < vector<int> > &image,int &N,int &M,vector<vector<bool> > &arr)
{
    arr[R][C]=true;
    for(int i=0;i<4;i++)
    {
        int X=R+x[i];
        int Y=C+y[i];
        if(X>=0 and X<N and Y>=0 and Y<M)
        {
            if(image[X][Y]==image[R][C] and arr[X][Y]==false)
            dfs(X,Y,image,N,M,arr);
        }    
    }
}
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int R, int C, int X) 
    {
        int N=image.size();
        if(N==0)
        {
            vector<vector<int> > ans;
            return ans;
        }
        int M=image[0].size();
        vector < vector<bool>  > arr(N,vector<bool> (M,false));
        dfs(R,C,image,N,M,arr);
        vector<vector<int> > ans(N,vector<int>(M,0));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(arr[i][j]==true)
                {
                    ans[i][j]=X;
                }
                else
                {
                    ans[i][j]=image[i][j];
                }
            }
        }
        return ans;
    }
};
