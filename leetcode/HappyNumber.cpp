//keep replacing number with sum of squares of digits until the sum becomes 1
//If it never becomes 1 then return false else return 0

//catch in this question is if sum turns out to be 4 it is an unhappy cycle as 4*4=16   ->   1^2 + 6^2 = 37    ->    3^2 + 7^2 -> 58
//5*5+8*8 = 89    ->    8*8 + 9*9 = 145   ->   1^2 + 4^2 + 5^2=42   ->  4*4+2*2 = 20    ->   2*2 = 4 

//therefore we can replace 4 with any of these sums and the program will still work.










class Solution {
public:
    bool isHappy(int n) {
        


        int rem=0;
        
        while(1==1)
        {

         int sum=0;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+(rem*rem);
            n=n/10;
        }

        if(sum==1)
        return true;

        else if (sum==4)
        {
            return false;
        }

        else
        n=sum;
        }
    }
};