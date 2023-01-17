#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int n, int m, vector<int> time, long long mid) {
    int daysCount=1;
    long long timeSum=0;
    //iterate over the whole array and set the partitions.
    for(int i=0; i<time.size(); i++) {
        if(timeSum+time[i]<=mid) {
            timeSum+=time[i];
        } else {
            daysCount++;
            //Check if number of daysCount is greater than given no. of days and array element is greater than mid 
            //if yes the return false else we will go to the next day and repeat the same process.
            if(daysCount>n || time[i]>mid) 
                return false;
            timeSum=time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{

    long long s, e, mid, ans=-1, sum=0;
    for(int i=0; i<time.size(); i++) {
        sum+=time[i];
    }
    //start, end and mid pointers for binary search
    s=0;
    e=sum;
    mid = s+(e-s)/2;
    //Binary Search
    while(s<=e) {
        if(isPossible(n, m, time, mid)) {
            //We need to find minimum time so store this answer and go to the left part.
            ans=mid;
            e=mid-1;
        } else {
            //This is not possible answer so go to the right part.
            s=mid+1;
        }
        //Update the mid
        mid=s+(e-s)/2;
    }
    return ans;
}
	
int main() {
    //n is number of days and m is number of chapters. Array size is m
    int n=3, m=5;
    int arr[]= {1, 2, 2, 3, 1};
    vector<int> time;
    for(int i=0; i<m; i++) {
        time.push_back(arr[i]);
    }
    cout<<"The minimal value of the maximum amount of time for which Ayush studies in a day is: "<<ayushGivesNinjatest(n, m, time)<<endl;;
}