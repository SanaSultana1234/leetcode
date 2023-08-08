#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void binToDec(int n) {
    int i=0, ans=0;

    while(n!=0) {
        int rem=n%10;
        if(rem==1) {
            ans = ans + pow(2, i);
        }
        n/=10;
        i++;
    }
    cout<<ans;
}


int main() {
    binToDec(1011101);
}