class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                nums[i]=-1;
        }
        unordered_map<int,int> Hash;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum==0)
            {
                ans=i+1;
            }
            if(Hash[sum])
            {
                int c=i+1-Hash[sum];
                if(c>ans)
                    ans=c;
            }
            else
            {
                Hash[sum]=i+1;
            }
        }
        return ans;
    }
};
