class Solution {
public:
    int mySqrt(int x) {
        int b;

        if(x==0)
            return 0;
        
        else
        {

        for(long int i=0;i<x;i++)
        {
            if ((i*i)>x)
            {
                return i-1;
            }
        }
        return 1;

        }
    }
};