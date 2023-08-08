class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector <int> ans;
        int count=0, rowSize=arr.size(), colSize=arr[0].size(), total=colSize*rowSize, col, row;
        int startingRow=0,
            startingCol=0,
            endingRow=rowSize-1,
            endingCol=colSize-1;

        while(count<total) {
            //1st row left to right
            for(col=startingCol; col<=endingCol && count<total; col++) {
                ans.push_back(arr[startingRow][col]);
                count++;
            }
            startingRow++;
            //last col top to bottom
            for(row=startingRow; row<=endingRow && count<total; row++) {
                ans.push_back(arr[row][endingCol]);
                count++;
            }
            endingCol--;
            //last row right to left
            for(col=endingCol; col>=startingCol && count<total; col--) {
                ans.push_back(arr[endingRow][col]);
                count++;
            }
            endingRow--;
            //1st col bottom to top
            for(row=endingRow; row>=startingRow && count<total; row--) {
                ans.push_back(arr[row][startingCol]);
                count++;
            }
            startingCol++;
        }
        
        
        return ans;
    }
};