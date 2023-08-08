//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to reverse words in a given string.
    string reverseWords(string S)
    {
        reverse(S.begin(), S.end());
        int s = 0, e = 0, n = S.length() - 1;
        while (e <= n)
        {
            while (e <= n && S[e] != '.')
            {
                e++;
            }
            e = e - 1;
            for (int i = s, j = e; i < j; i++, j--)
            {
                swap(S[i], S[j]);
            }
            e += 2;
            s = e;
        }
        
        if (s < n) // Check if there is a last word without a dot
        {
            for (int i = s, j = n; i < j; i++, j--)
            {
                swap(S[i], S[j]);
            }
        }
        
        return S;
    }
};



//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends