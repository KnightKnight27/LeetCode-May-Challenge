bool compare(const pair<int,char> &A,const pair<int,char> &B)
{
    if(A.first==B.first)
    {
        return (int)A.second<(int)B.second;
    }
    return A.first>B.first;
}
class Solution {
public:
    string frequencySort(string S) 
    {
        unordered_map<char,int> Hash;
        for(auto it:S)
        {
            Hash[it]+=1;
        }
        vector< pair< int,char > > arr;
        string temp;
        for(auto it:Hash)
        {
            arr.push_back(make_pair(it.second,it.first));
        }
        sort(arr.begin(),arr.end(),compare);
        int i=0;
        for(auto it:arr)
        {
            int z=it.first;
            temp.insert(i,it.first,it.second);
            i+=z;
        }
        return temp;
    }
};
