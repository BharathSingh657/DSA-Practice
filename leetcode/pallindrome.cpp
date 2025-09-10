class Solution {
public:
    bool isPalindrome(int x) {

        long int reversed =0,rem=0;

        int y=x;

        if(y<0)
        {
            return false;
        }

        else if(y==0)
        return true;

        else
        {

        while (y!=0)
        {
        rem=y%10;
        reversed = reversed*10 + rem;

        y=y/10;
        }

        if(x==reversed)
        
            return true;
        
        else
            return false;

    
        }

        
    }
};