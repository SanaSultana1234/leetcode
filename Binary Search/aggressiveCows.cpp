#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid) {
    int lastPos=stalls[0];
    int cowCount=1;
    for(int i=0; i<stalls.size(); i++) {
        if(stalls[i]-lastPos>=mid) {
            cowCount++;
            //if all cows are placed then return true
            if(cowCount==k) {
                return true;
            }
            //else go to the next stall and repeat the process
            lastPos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //sort the array to apply binary search
    sort(stalls.begin(), stalls.end());
    int s, e, mid, ans=-1, maxi=-1000;
    //find the maximum element for upper interval of search space
    for(int i=0; i<stalls.size(); i++) {
        if(stalls[i]>maxi) 
            maxi=stalls[i];
    } 
    s=0, e=maxi;
    mid=s+(e-s)/2;
    //apply binary search
    while(s<=e) {
        if(isPossible(stalls, k, mid)) {
            //if possible go to right part as we have to find the largest distance;
            ans=mid;
            s=mid+1;
        } else {
            e=mid-1;
        }
        //update the mid
        mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
      //k is the number of aggressive cows
        int k=2;
        int arr[]={4, 2, 1, 3, 6};
        vector <int> stalls;
        for(int i=0; i<5; i++)
            stalls.push_back(arr[i]);
        cout<<"The largest minimum distance is : "<<aggressiveCows(stalls, k)<<endl;
}