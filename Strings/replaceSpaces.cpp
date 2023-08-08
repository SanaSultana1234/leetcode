#include <bits/stdc++.h> 
string replaceSpaces(string &stri){
	// Write your code here.
	string str="";
	for(char ch: stri) {
		if(ch==' ') {
			str.push_back('@');
			str.push_back('4');
			str.push_back('0');
		} else {
			str.push_back(ch);
		}
	}
	return str;
}