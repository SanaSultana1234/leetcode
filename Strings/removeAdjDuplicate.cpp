

class Solution {
public:
    string removeDuplicates(string s) {
        string st="";
        for(char ch: s) {
            int n=st.length();
            char prevChar=st.back();
            if(n>0 && ch==prevChar)
                st.pop_back();
            else st.push_back(ch);
        }
        
return st;
    }

};