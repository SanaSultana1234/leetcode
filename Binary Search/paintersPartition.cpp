#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &boards, int k, int mid) {
    //number of painters
    int painterCount=1;
    //Sum of boards in boards[] array
    int boardSum=0;
    for(int i=0; i<boards.size(); i++) {
        if(boardSum+boards[i]<=mid) {
            boardSum+=boards[i];
        } else {
            //assigning the boards to next painter
            painterCount++;
            //check if painterCount greater than given no. of painters or array element is greater than mid. If yes return false. else Set the boardSum for the next painter and repeat the same process.
            if(painterCount>k||boards[i]>mid)
                return false;
            boardSum=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
  
    int s, e, mid, ans, sum=0;
    for(int i=0; i<boards.size(); i++) {
        sum+=boards[i];
    }
    s=0, e=sum;
    mid=s+(e-s)/2;
    while(s<=e) {
        //ifpossible then goto the left part of the array as we have to search for the minimum
        if(isPossible(boards, k, mid)) {
            ans=mid;
            e=mid-1;
        } else {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
      //k is the number of painters
        int k=2;
        int arr[]={5, 5, 5, 5};
        vector <int> boards;
        for(int i=0; i<4; i++)
            boards.push_back(arr[i]);
        cout<<"The area of minimum time to get this job done is: "<<findLargestMinDistance(boards, k)<<endl;
}