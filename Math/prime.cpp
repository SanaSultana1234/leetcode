#include <iostream>
#include <math.h>
using namespace std;

void prime(int n) {
    int flag=0;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            flag=1;
            cout<<"No ";
            break;
        } 
    }
    if(!flag)
        cout<<"yes ";
}

int main() {
    int arr[10] ={1, 2, 3, 4, 5, 10, 100, 101, -1, -1};
    for(int i: arr) {
        prime(i);
    }
}