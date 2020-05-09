class Solution {
public:
    int firstUniqChar(string s)
    {
        unordered_map<int,int> Hash;
        for(auto it:s)
        {
            // if(Hash[it]==0
                Hash[it]+=1;
        }
        int i=0;
        for(auto it:s)
        {
            if(Hash[it]==1)
            {
                return i;
            }
            i++;
        }
        return -1;
    }
};
