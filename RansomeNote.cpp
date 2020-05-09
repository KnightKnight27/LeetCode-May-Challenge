class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<int,int> H;
        for(auto it:magazine)
        {
            H[it]++;
        }
        for(auto it:ransomNote)
        {
            H[it]--;
            if(H[it]<0)
            {
                return false;
            }
        }
        return true;
    }
};
