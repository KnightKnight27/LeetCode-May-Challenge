class Solution {
public:
    int majorityElement(vector<int>& arr) 
    {
        //BOOTH'S ALGO
        int index=0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==arr[index])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count<0)
            {
                count=0;
                index=i;
            }
        }
        return arr[index];
    }
};
