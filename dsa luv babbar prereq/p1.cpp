#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    char count='A';
    for(int i=1; i<=n; i++) {
        char temp = 'A'+ char(i-1);
        for(int j=1; j<=i; j++) {
            cout<<char('A'+n-i+j-1)<<" ";
        }
        cout<<endl;
    }
}