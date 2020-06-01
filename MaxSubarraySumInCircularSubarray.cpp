int kadane(vector<int>&arr)
{
    int sum=0;
    int ans=0;
    for(auto it:arr)
    {
        sum+=it;
        if(sum<0)
        {
            sum=0;
        }
        ans=max(ans,sum);
    }
    return ans;
}
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr)
    {
        if(arr.size()==1)
        {
            return arr[0];
        }
        bool flag=false;
        int ma=INT_MIN;
        int sum=0;
        for(auto it:arr)
        {
            sum+=it;
            ma=max(it,ma);
            if(it>=0)
            {
                flag=true;
            }
        }
        if(flag==false)
        {
            return ma;
        }
        int max1=kadane(arr);
        for(int i=0;i<arr.size();i++)
        {
            arr[i]= -arr[i];
        }
        int max2=sum+kadane(arr);
        return max(max1,max2);
        
    }
};
