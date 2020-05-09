class Solution {
public:
    bool isPerfectSquare(int num)
    {
        if(num==1)
            return true;
        long long int i=1;
        long long int j=num;
        while(i<=j)
        {
            long long int mid=(i)+(j-i)/2;
            if(mid*mid<num)
            {
                i=mid+1;
            }
            else if(mid*mid==num)
            {
                return true;
            }
            else
            {
                j=mid-1;
            }
        }
        return false;
    }
};
