#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in(n+1), out(n+1);
        if(n==1)
            return 1;
        for(auto a: trust) {
            in[a[1]]++;
            out[a[0]]++;
        }
        for(int i=0; i<n+1; i++) {
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
        return -1;
    }
};