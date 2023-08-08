#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:

    int help(int n) {
        int rem, ans=0;
        while(n) {
           rem=n%10;
           ans += (rem*rem);
           n/=10;
        }
        return ans;
    }

    bool isHappy(int n) {
        int slow=n, fast=n;
        do {
            slow=help(slow);
            fast=help(help(fast));
        } while(slow!=fast);
        return slow==1;
    }
};