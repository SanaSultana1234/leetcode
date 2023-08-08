class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;
        for(int i=0; i<=30; i++) {
            if(ans==n)
                return true;
            if(ans<INT_MAX/2)
                ans*=2;
        }
        return false;
    }
};

//Second approach

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        while(n!=0) {
            if(n&1) {
                if(count>1)
                    break;
                count++;
            }
            n>>=1;
        }
        return count==1;
    }
};