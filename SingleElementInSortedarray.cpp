class Solution {
public:
    int singleNonDuplicate(vector<int>& arr)
    {
        
        int N=arr.size();
        if(N==1)
        {
            return arr[0];
        }
        int start=0;
        int end=N-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(mid==0)
            {
                if(arr[mid]!=arr[mid+1])
                {
                    return arr[mid];
                }
                else
                {
                    start=mid+1;
                }
            }
            else if(mid==N-1)
            {
                if(arr[mid]!=arr[mid-1])
                {
                    return arr[mid];
                }
                else
                {
                    end=mid-1;
                }
            }
            else
            {
                if( arr[mid]!=arr[mid-1] and arr[mid]!=arr[mid+1])
                {
                    return arr[mid];
                }
                else if(arr[mid]!=arr[mid-1])
                {
                    if(mid%2==0)
                        start=mid+1;
                    else
                        end=mid-1;
                }
                else if(arr[mid]!=arr[mid+1])
                {
                    if(mid%2==1)
                    {
                        start=mid+1;
                    }
                    else
                        end=mid-1;
                }   
            }
        }
        return arr[start];
    }
};
