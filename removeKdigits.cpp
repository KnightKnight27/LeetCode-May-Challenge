class Solution {
public:
    string removeKdigits(string num, int k)
    {
        while(k and num.size()>0)
        {
            int i=0;
            while(i<num.size()-1 and (int)num[i]<=(int)num[i+1])
            {
                i++;
            }
            num.erase(i,1);
            k--;
        }
        int i=0;
        while(num.size()>0 and num[0]=='0')
        {
            num.erase(0,1);
        }
        if(num=="")
        {
            return "0";
        }
        return num;
        
    }
};
