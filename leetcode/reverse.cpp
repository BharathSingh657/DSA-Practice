class Solution {
public:
    int reverse(int x) {

        long int reversed=0;
        int rem=0;

        while(x!=0)
        {
        rem=x%10;
        reversed=10*reversed+rem;
        x=x/10;
        }

        if((reversed>INT_MAX)||(reversed<INT_MIN))
        {
            return 0;

        }

        else

        return reversed;
        
    }
};