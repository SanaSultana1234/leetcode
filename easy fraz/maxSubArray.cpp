#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, ans=INT_MIN;
        for(int a: nums) {
            sum+=a;
            ans=max(ans, sum);
            if(sum<0)
                sum=0;
        }
        return ans;
    }
};