#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0; i<n-1; i++) {
        int mini=i;
        for (int j = i + 1; j < n; j++) {
            if(arr[mini]>arr[j]) 
                mini=j; 
        }
        if(mini!=i)
            swap(arr[mini], arr[i]);
    }
}