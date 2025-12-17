#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int runningsum;
        
        for(int i=0;i<nums.size();i++)
        {
            int runningsum=0;
            for(int j =0;j<=i;j++)
            {
            runningsum = runningsum+nums[j];
            
            }
            sum.push_back(runningsum);
        }

        return sum;

        
        
    }
};