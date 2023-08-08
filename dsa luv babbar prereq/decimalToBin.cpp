#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void decToBin1(int n) {
    int ans=0, i=0, bit;
    char arr[31];

    while(n!=0) {
        bit = n&1;
        if(bit) 
            arr[i] = '1';
        else
            arr[i] = '0';
        n>>=1;
        i++;
    }

    for(int j=i-1; j>=0; j--)
        cout<<arr[j];
    cout<<endl;
}

void decToBin2 (int n) {
    int ans=0, i=0;
        while(n>0) {
        int rem = n%2;
        ans = ans + rem*pow(10, i);
        n/=2;
        i++;
    }
    
    cout<<ans<<endl;
}


void decToBin3(int n) {
    int ans =0, bit, i=0;
        while(n!=0) {
        bit = n&1;
        ans = ans + (bit*pow(10, i));
        n= n>>1;
        i++;
    }
    cout<<ans<<endl;
}


int main() {
    for(int i=0; i<10; i++) {
        decToBin2(i);
    }
}