//{ Driver Code Starts
#include <iostream>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i=1; i<=2*n-1; i++) {
            for(int j=1; j<=2*n-1; j++) {
                int top=i-1;
                int bot=2*n-i-1;
                int left=j-1;
                int right=2*n-j-1;
                int ans=min(min(top, bot), min(left, right));
                cout<<n-ans<<" ";
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends