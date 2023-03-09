#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& str) {
        int s=0,e=str.size()-1;
        while(s<=e) {
            swap(str[s], str[e]);
            s++;
            e--;
        }
    }
};

int main() {

    Solution obj;
    vector<char> str;

    str.push_back('a');
    str.push_back('b');

    for(char ch: str) {
        cout<<ch<<" ";
    }
    cout<<endl;

    obj.reverseString(str);
    for(char ch: str) {
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}