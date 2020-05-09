class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) 
    {
        int N=arr.size();
        if(N==1)
        {
            return true;
        }
        int dy=arr[1][1]-arr[0][1];
        int dx=arr[1][0]-arr[0][0];
        for(int i=2;i<N;i++)
        {
            int y=arr[i][1]-arr[i-1][1];
            int x=arr[i][0]-arr[i-1][0];
            if(x*dy!=y*dx)
            {
                return false;
            }
        }
        return true;
    }
};
