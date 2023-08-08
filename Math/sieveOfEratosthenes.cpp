#include <iostream>
#include <math.h>
using namespace std;

void sieve(int n) {
    // 0 prime
    // 1 non-prime
    int arr[1000] = {0}, count=0;
    arr[0] = 1, arr[1] = 1;
    for(int i=2; i<n; i++) {
        if(arr[i]==0) {
            for(int j=i*i; j<n; j=j+i) {
                arr[j] = 1;
            }
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl<<count<<endl;
}

int main() {
    sieve(1000);
}