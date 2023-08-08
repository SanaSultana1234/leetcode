#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removePalindromeSub(string str) {
        if(str.size()==0)
        return 0;
        int s=0, e=str.size()-1;
        while(s<e) {
            if(str[s]!=str[e])
            return 2;
            s++;
            e--;
        }
        return 1;
    }
};