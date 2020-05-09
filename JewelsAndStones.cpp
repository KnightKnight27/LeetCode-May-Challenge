class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int count=0;
        unordered_map<int,int> Hash;
        for(auto it:J)
        {
            Hash[it]+=1;
        }
        for(auto it:S)
        {
            if(Hash[it])
            {
                count++;
            }
        }
        return count;
    }
};
