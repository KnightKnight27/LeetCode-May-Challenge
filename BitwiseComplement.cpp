class Solution {
public:
    int findComplement(int num)
    {
        int i=0;
        int x=0;
        if(num==0)
            return 1;
        while(num)
        {
            if((num&1)==0)
            {
                x+=(1<<i);
            }
            i+=1;
            num=num/2;
        }
        return x;
    
    }
};
