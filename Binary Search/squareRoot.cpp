#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int s=0, e=n, mid, ans=-1;
    while(s<=e) {
        int mid=s+(e-s)/2;
        if(mid*mid == n) {
            cout<<mid;
            return 0;
        }
        else if(mid*mid>n)
            e=mid-1;
        else {
            ans=mid;
            s=mid+1;
        }
    }
    cout<<ans;
}