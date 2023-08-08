#include <vector>
#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq;
        int x, y;
        for(auto a: stones)
            pq.push(a);
        while(pq.size()>1) {
            y=pq.top();
            pq.pop();
            x=pq.top();
            pq.pop();
            if(x==y) continue;
            else pq.push(y-x);
        }
        if(!pq.size()) return 0;
        return pq.top(); 
    }
};