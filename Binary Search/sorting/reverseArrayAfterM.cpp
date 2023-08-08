#include <bits/stdc++.h> 

void swap(int &a, int &b) {
	a = a^b;
	b = a^b;
	a = a^b;
}

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int n=arr.size();
	int s=m+1, e=n-1;
	while(s<e) {
		swap(arr[s], arr[e]);
		s++;
		e--;
	}
}
