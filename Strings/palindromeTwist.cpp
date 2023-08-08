#include <bits/stdc++.h> 
bool validChar(char ch) {
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        return true;
    return false;
}

char lower(char ch) {
    if(ch>='A' && ch<='Z') {
        return ch-'A'+'a';
    } else return ch;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    int st=0, e=s.length()-1;
    int flag=1;
    while(st<e) {
        if(validChar(s[st]) && validChar(s[e])) {
          if (lower(s[st]) != lower(s[e])) {
            return false;
          }
          st++;
          e--;
        } else if(!validChar(s[st]))
            st++;
        else e--;
    }
    return true;
}