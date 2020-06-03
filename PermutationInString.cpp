class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int N=s2.size();
        int M=s1.size();
        if(M>N)
        {
            return false;
        }
        unordered_map<char,int> hash;
        for(auto it:s1)
        {
            hash[it]++;
        }
        unordered_map<char,int> temp;
        for(int i=0;i<M;i++)
        {
            temp[s2[i]]++;
        }
        for(int i=M;i<=N;i++)
        {
            bool flag=true;
            for(auto it:hash)
            {
                if(temp[it.first]!=it.second)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                return true;
            if(i==N)
                break;
            temp[s2[i-M]]--;
            temp[s2[i]]++;
        }
        return false;
    }
};
