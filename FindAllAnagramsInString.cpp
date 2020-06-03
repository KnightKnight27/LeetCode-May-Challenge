class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> Hash;
        for(auto it:p){Hash[it]++;}
        int N=s.size();
        int M=p.size();
        vector<int> ans;
        unordered_map<char,int> temp;
        for(int i=0;i<M;i++)
        {
            temp[s[i]]++;
        }
        for(int i=M;i<=N;i++)
        {
            bool flag=true;
            for(auto it:Hash)
            {
                if(temp[it.first]!=it.second)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans.push_back(i-M);
            if(i==N)
                break;
            temp[s[i-M]]--;
            temp[s[i]]++;
        }
        return ans;
    }
};
